# DFRobot_RGBLED
- [English Version](./README.md)

本产品是专门针对Arduino扩展设计的直插式5050全彩LED模块。体积小，亮度高，拥有完美的三基色，通过组合，可以调制出各种颜色。其中三种颜色的针脚全部引出，公共端接GND，控制端高电平有效。
该产品利用PWM调节颜色，非常适合工业设计、原型开发和爱好者使用。为你的Arduino项目增添各种绚丽的动态显示。
用户可以用我们配送的排针，直接将模块查到Arduino的数字口上。为您省去了复杂的接线步骤。
我们采用优质的RGB LED灯珠，发光角度大，并利用其内部的反射，达到最大的光藕效果。可以提供倾斜补偿后的输出。可以说是目前市场上最具性价比的电子罗盘传感器。这样只用一颗芯片就实现了6轴的数据检测和输出，降低了客户的设计难度，减小了PCB板的占用面积，降低了器件成本。微型的体积足以让它集成在任何项目之上。<br>

![产品效果图片](./resources/images/DFR0238.jpg)

## 产品链接（https://www.dfrobot.com.cn/goods-756.html)
    DFR0238：RGB LED模块 5050
## 目录

  * [概述](#概述)
  * [库安装](#库安装)
  * [方法](#方法)
  * [兼容性](#兼容性)
  * [历史](#历史)
  * [创作者](#创作者)

## 概述

提供Arduino库控制rgb灯

## 库安装

使用此库前，请首先下载库文件，将其粘贴到\Arduino\libraries目录中，然后打开examples文件夹并在该文件夹中运行演示。

## 方法
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

## 兼容性

主板                | 通过    | 未通过   | 未测试    | 备注
------------------ | :----------: | :----------: | :---------: | -----
Arduino Uno        |      √       |              |             | 
FireBeetle-ESP8266        |      √       |              |             | 
FireBeetle-ESP32        |      √       |              |             | 
Arduino MEGA2560        |      √       |              |             | 
Arduino Leonardo|      √       |              |             | 
Micro:bit        |      √       |              |             | 
FireBeetle-M0        |      √       |              |             | 
Raspberry Pi      |      √       |              |             | 


## 历史

- 2022/06/06 - 版本 1.0.0 发布.

## 创作者

Written by fengli(li.feng@dfrobot.com), 2022.06.06 (Welcome to our [website](https://www.dfrobot.com/))





