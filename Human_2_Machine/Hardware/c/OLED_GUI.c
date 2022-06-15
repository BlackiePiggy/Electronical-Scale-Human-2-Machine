#include <OLED_GUI.h>

extern unsigned int Weight_Set;
extern unsigned char Set_No;
extern unsigned char Key_0_Flag; extern unsigned char Key_1_Flag;
extern unsigned char Key_2_Flag; extern unsigned char Key_3_Flag;
extern unsigned char Key_4_Flag; extern unsigned char Key_5_Flag;
extern unsigned char Key_6_Flag; extern unsigned char Key_7_Flag;
extern unsigned char Key_8_Flag; extern unsigned char Key_9_Flag;
extern unsigned char Key_Left_Flag; extern unsigned char Key_Right_Flag;
extern unsigned char Key_Confirm_Flag; extern unsigned char Key_Setting_Flag;
extern unsigned char Key_Up_Flag; extern unsigned char Key_Down_Flag;

void Weight_Set_Value_Change(unsigned char num,unsigned char value)
{
    unsigned char GeWei; unsigned char ShiWei; 
    unsigned char BaiWei; unsigned char QianWei;
    unsigned int *p; p = &Weight_Set;
    
    QianWei = (Weight_Set/1000)  % 10;
    BaiWei = (Weight_Set/100)  % 10;
    ShiWei = (Weight_Set/10)  % 10;
    GeWei = (Weight_Set/1)  % 10;
    
    switch(num) 
    {
        case 1: *p = value*1000 + BaiWei*100 + ShiWei*10 + GeWei*1; break;
        case 2: *p = QianWei*1000 + value*100 + ShiWei*10 + GeWei*1; break;
        case 3: *p = QianWei*1000 + BaiWei*100 + value*10 + GeWei*1; break;
        case 4: *p = QianWei*1000 + BaiWei*100 + ShiWei*10 + value*1; break;
    }   
}

void Renew_Weight_Set_Value(void)
{
    if(Key_0_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 0);
        Key_0_Flag = 0;
    }
    if(Key_1_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 1);
        Key_1_Flag = 0;
    }
    if(Key_2_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 2);
        Key_2_Flag = 0;
    }
    if(Key_3_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 3);
        Key_3_Flag = 0;
    }
    if(Key_4_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 4);
        Key_4_Flag = 0;
    }
    if(Key_5_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 5);
        Key_5_Flag = 0;
    }
    if(Key_6_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 6);
        Key_6_Flag = 0;
    }
    if(Key_7_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 7);
        Key_7_Flag = 0;
    }
    if(Key_8_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 8);
        Key_8_Flag = 0;
    }
    if(Key_9_Flag == 1) 
    {
        Weight_Set_Value_Change(Set_No, 9);
        Key_9_Flag = 0;
    }
}

void Set_No_Renew(void)
{
    unsigned char *t; t = &Set_No;
    
    if(Key_Left_Flag == 1) 
    {
        if(Set_No == 1) 
        {
            *t = 4;    
        } else *t = *t - 1;    //printf("*t =%d\n", *t);
        Key_Left_Flag = 0;
    }   
    
    if(Key_Right_Flag == 1) 
    {
        if(Set_No == 4) 
        {
            *t = 1;    
        } else *t = *t + 1;
        Key_Right_Flag = 0;
    }
    
}
