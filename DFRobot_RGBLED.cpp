/*!
 * @file DFRobot_RGBLED.cpp
 * @brief Define the basic structure of class DFRobot_RGBLED 
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date 2022-06-06
 * @https://github.com/DFRobot/DFRobot_RGBLED
 */
#include "DFRobot_RGBLED.h"
#include "Arduino.h"
DFRobot_RGBLED::DFRobot_RGBLED(uint8_t  redPin, uint8_t  greenPin, uint8_t  bluePin)  //Initialization for the three pins of to show RGB/HSV color
{
	this->Pin_red=redPin;
	this->Pin_green=greenPin;
	this->Pin_blue=bluePin;
}

DFRobot_RGBLED::DFRobot_RGBLED()  //Initialization for the three pins of to show RGB/HSV color
{
}
	

void DFRobot_RGBLED::InitPins(){

	analogWrite(Pin_red,255);
	analogWrite(Pin_green,255);
	analogWrite(Pin_blue,255);
}
	
	//Set RGB color to the LED
void DFRobot_RGBLED::colorRGB(int red, int green, int blue){

	analogWrite(Pin_red,constrain(red,0,255));
	analogWrite(Pin_green,constrain(green,0,255));
	analogWrite(Pin_blue,constrain(blue,0,255));
}
	

//Set HSV color to the LED
//range of H:0~360
//range of S:0.0~1.0
//range of V:0.0(BLACK)~1.0(WHITE)
void DFRobot_RGBLED::colorHSV(int hue, int Value, int Saturation){
	int __max_brightness = 255;

	uint8_t sector = hue / 60;
	uint8_t rel_pos = hue - (sector * 60);
	uint16_t const mmd = 255 * 255; 	/* maximum modulation depth */
	uint16_t top;
	top = Value * 255;
	uint16_t bottom = Value * (255 - Saturation); 	/* (Value*255) - (Value*255)*(Saturation/255) */
	uint16_t slope = (uint16_t)(Value) * (uint16_t)(Saturation) / 120; 	/* dy/dx = (top-bottom)/(2*60) -- Value*Saturation: modulation_depth dy */
	uint16_t a = bottom + slope * rel_pos;
	uint16_t b = bottom + (uint16_t)(Value) * (uint16_t)(Saturation) / 2 + slope * rel_pos;
	uint16_t c = top - slope * rel_pos;
	uint16_t d = top - (uint16_t)(Value) * (uint16_t)(Saturation) / 2 - slope * rel_pos;

	uint16_t R, G, B;

	if (sector == 0)    {
		R = c;
		G = a;
		B = bottom;
	}
	else if (sector == 1)	{
		R = d;
		G = b;
		B = bottom;
	}
	else if (sector == 2)	{
		R = bottom;
		G = c;
		B = a;
	}
	else if (sector == 3)	{
		R = bottom;
		G = d;
		B = b;
	}
	else if (sector == 4)	{
		R = a;
		G = bottom;
		B = c;
	}
	else	{
		R = b;
		G = bottom;
		B = d;
	}

	uint16_t scale_factor = mmd / __max_brightness;

	R = (uint8_t) (R / scale_factor);
	G = (uint8_t) (G / scale_factor);
	B = (uint8_t) (B / scale_factor);

	this->colorRGB(R,G,B);
}