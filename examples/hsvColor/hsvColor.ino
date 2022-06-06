/*!
 * @file hsvColor.ino
 * @brief This Sample code is for showing the full color of the RGB LED breakout
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT license (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date  2021-06-06
 * @url https://github.com/DFRobot/DFRobot_RGBLED
 */



#include <DFRobot_RGBLED.h>

DFRobot_RGBLED myled = DFRobot_RGBLED(9,10,11); //9:Red  10:Green   11:Blue

void setup(){
    
}

void loop(){
  
 //Adjust the color
 for(int j = 0;j < 360; j++){  
    myled.colorHSV(j,255,255);     //H(Hue):0-360
                                   //S(Saturation):0-255  
                                   //V(Value):0-255
    delay(20);                     //the speed of color changing
 }
 delay(100);
 //Adjust the brightness
 
 for(int j = 0;j < 255; j++){  
    myled.colorHSV(70,255,j);      //H(Hue):0-360
                                   //S(Saturation):0-255  
                                   //V(Value):0-255
    delay(20);                     
 }
 delay(100);
}