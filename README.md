# DFRobot_RGBLED
- [中文版](./README_CN.md)

This small size breakout is programmable full-color RGB LED for hobbyists,<br>
industrial designers, prototypers, and experimenters. It is designed to <br>
allow the easy addition of dynamic indicators, displays, and lighting <br>
to existing or new projects. Controlled by PWM channels can be available <br>
in soft red, orange, yellow, green, blue and white...The high quality LED <br>
has wide viewing angle and optimized light coupling by inter reflector. <br>

![Product Image](./resources/images/DFR0238.jpg)

## Product Link（https://www.dfrobot.com/product-900.html)    
    DFR0238：RGB LED Breakout (5050)
## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary
Provide an Arduino library to control the RGB lights
## Installation

To use this library, first download the library file, paste it into the \Arduino\libraries directory, then open the examples folder and run the demo in the folder.



## Methods
```C++

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
```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino Uno        |      √       |              |             | 
FireBeetle-ESP8266        |      √       |              |             | 
FireBeetle-ESP32        |      √       |              |             | 
Arduino MEGA2560        |      √       |              |             | 
Arduino Leonardo|      √       |              |             | 
Micro:bit        |      √       |              |             | 
FireBeetle-M0        |      √       |              |             | 
Raspberry Pi      |      √       |              |             | 


## History

- 2022/06/06 - Version 1.0.0 released.
## Credits

Written by fengli(li.feng@dfrobot.com), 2022.06.06 (Welcome to our [website](https://www.dfrobot.com/))
