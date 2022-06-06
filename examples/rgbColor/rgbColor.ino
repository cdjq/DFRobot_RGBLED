/*!
 * @file rgbColor.ino
 * @brief This Sample code is for showing the full color of the RGB LED breakout
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT license (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date  2021-06-06
 * @url https://github.com/DFRobot/DFRobot_RGBLED
 */
#include <DFRobot_RGBLED.h>

DFRobot_RGBLED myled = DFRobot_RGBLED(9,10,11);

void setup(){
}
void loop(){
  myled.colorRGB(random(0,255),random(0,255),random(0,255)); //R:0-255 G:0-255 B:0-255
  delay(1000);
}
