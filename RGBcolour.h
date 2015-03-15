/*
  RGBcolour.h - Library for flashing LEDS.
  Created by Lawrence McIntosh 15 Mar 2015.
  Released into the public domain.
*/
#ifndef RGBcolour_h
#define RGBcolour_h


#include "Arduino.h"


class RGBcolour
{
  public:
	RGBcolour(int Red,int Green,int Blue);  
    
	
    int Red();
	int Green();
	int Blue();
	
	int RGB[3];
	
	
	static const int iRED = 0;
	static const int iGREEN = 1;
	static const int iBLUE = 2;
	
  private:
    void pMessage(String msg);	
	
		
};

#endif


