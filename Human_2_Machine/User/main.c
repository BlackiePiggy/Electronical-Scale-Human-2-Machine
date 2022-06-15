#include <stdio.h>
#include <OLED_GUI.h>

unsigned int Weight_Set = 1234;
unsigned char Set_No;
unsigned char Key_0_Flag; unsigned char Key_1_Flag;
unsigned char Key_2_Flag; unsigned char Key_3_Flag;
unsigned char Key_4_Flag; unsigned char Key_5_Flag;
unsigned char Key_6_Flag; unsigned char Key_7_Flag;
unsigned char Key_8_Flag; unsigned char Key_9_Flag;
unsigned char Key_Left_Flag; unsigned char Key_Right_Flag;
unsigned char Key_Confirm_Flag; unsigned char Key_Setting_Flag;
unsigned char Key_Up_Flag; unsigned char Key_Down_Flag;

int main(void) 
{
//    printf("Input is:%4d\n", Weight_Set);
    Set_No = 3; Key_9_Flag = 1;
    Renew_Weight_Set_Value();
//    printf("Output is:%4d\n", Weight_Set);
    
    Key_Left_Flag = 1;
    Key_9_Flag = 1;
    Set_No_Renew();
    Renew_Weight_Set_Value();
//    printf("Output is:%4d\n", Weight_Set);
    
    Key_Left_Flag = 1;
    Key_9_Flag = 1;
    Set_No_Renew();
    Renew_Weight_Set_Value();
//    printf("Output is:%4d\n", Weight_Set);
    
    Key_Left_Flag = 1;
    Key_9_Flag = 1;
    Set_No_Renew();
    Renew_Weight_Set_Value();
//    printf("Output is:%4d\n", Weight_Set);
    
    while(1);
}