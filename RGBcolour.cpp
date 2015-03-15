/*
  RGBcolour.cpp - Library for flashing LEDS.
  Created by Lawrence McIntosh  Jun 2014.
  Released into the public domain.
*/

#include "RGBcolour.h"
#include "Arduino.h"
#include "Console.h"
 

#define NUMBER_OF_COLOURS 3


RGBcolour::RGBcolour(int Red,int Green,int Blue)
{
	RGB[iRED] = Red;
	RGB[iGREEN] = Green;
	RGB[iBLUE] = Blue;
}

int RGBcolour::Red()
{
	return RGB[iRED];
}

int RGBcolour::Green()
{
	return RGB[iGREEN];
}
int RGBcolour::Blue()
{
	return RGB[iBLUE];
}

void RGBcolour::pMessage(String msg) {
  if (Console) Console.println("C: " + msg);
  if (Serial) Serial.println("S: " + msg);
}
