/*!
 * @file DFRobot_RGBLED.h
 * @brief Define the basic structure of class DFRobot_RGBLED 
 * @details 该库通过驱动主控输出PWM信号,控制RGB灯的亮度和颜色
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
   * @param redPin  控制RGB通道中红色灯的引脚
   * @param greenPin  控制RGB通道中蓝色灯的引脚
   * @param bluePin  控制RGB通道中绿色灯的引脚
   */
  DFRobot_RGBLED(uint8_t  redPin, uint8_t  greenPin, uint8_t  bluePin);

  /*!
   * @fn DFRobot_RGBLED
   * @brief Constructor 
   */
  DFRobot_RGBLED();

  /*!
   * @fn InitPins
   * @brief 初始化引脚,并将所有的RGB三个通道的亮度调到最大 
   */
  void InitPins();
  
  /*!
   * @fn colorRGB
   * @brief 以RGB的色彩格式来控制灯珠的颜色
   * @param red RGB通道中红色灯的亮度
   * @param green RGB通道中蓝色灯的亮度
   * @param blue RGB通道中绿色灯的亮度
   */
  void colorRGB(int red, int green, int blue);

  /*!
   * @fn colorHSV
   * @brief 以HSV的色彩格式来控制灯珠的颜色
   * @param hue 色调（H）
   * @param Value 明度（V）
   * @param Saturation 饱和度（S）
   */
  void colorHSV(int hue, int Value, int Saturation);
private:
  uint8_t  Pin_red;
  uint8_t  Pin_green;
  uint8_t  Pin_blue; 
};

#endif

