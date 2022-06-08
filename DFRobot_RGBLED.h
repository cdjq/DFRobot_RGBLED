/*!
 * @file DFRobot_RGBLED.h
 * @brief Define the basic structure of class DFRobot_RGBLED 
 * @details The library controls the brightness and color of the RGB light by driving the main controller to output PWM signal.
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date 2022-06-06
 * @https://github.com/DFRobot/DFRobot_RGBLED
 */

#ifndef DFROBOT_RGBLED_H_
#define DFROBOT_RGBLED_H_

#include "Arduino.h"
//#define ENABLE_DBG
#include <math.h>
#ifdef ENABLE_DBG
#define DBG(...) {Serial.print("["); Serial.print(__FUNCTION__); Serial.print("(): "); Serial.print(__LINE__); Serial.print(" ] "); Serial.println(__VA_ARGS__);}
#else
#define DBG(...)
#endif

class DFRobot_RGBLED{
public:
  /*!
   * @fn DFRobot_RGBLED
   * @brief Constructor 
   * @param redPin  the pin for controlling the red light of RGB channel
   * @param greenPin  the pin for controlling the green light of RGB channel
   * @param bluePin  the pin for controlling the blue light of RGB channel
   */
  DFRobot_RGBLED(uint8_t  redPin, uint8_t  greenPin, uint8_t  bluePin);

  /*!
   * @fn DFRobot_RGBLED
   * @brief Constructor 
   */
  DFRobot_RGBLED();

  /*!
   * @fn InitPins
   * @brief Initialize the pin, and set the brightness of the three lights of RGB channel to maximum 
   */
  void InitPins();
  
  /*!
   * @fn colorRGB
   * @brief control the light color in RGB color format
   * @param red the brightness of the red light of RGB channel
   * @param green the brightness of the green light of RGB channel
   * @param blue the brightness of the blue light of RGB channel
   */
  void colorRGB(int red, int green, int blue);

  /*!
   * @fn colorHSV
   * @brief control the light color in HSV color format
   * @param hue hue (H)
   * @param Value value (V)
   * @param Saturation saturation (S)
   */
  void colorHSV(int hue, int Value, int Saturation);
private:
  uint8_t  Pin_red;
  uint8_t  Pin_green;
  uint8_t  Pin_blue; 
};

#endif

