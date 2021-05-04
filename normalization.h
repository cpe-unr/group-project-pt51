#ifndef NORMALIZATION_H
#define NORMALIZATION_H

#include "processor.h"
#include <iostream>
/**
* This is a Normalization class
*/
class Normalization: public Processor{
	int adjustLevel;
	int newAdjustLevel;
	public:
	
/**
* Base constructor of normalization 
*/
		Normalization();
		
/**
* Normalization constructor for new adjusted level 
* @param newAdjustedLevel - takes in the new level after normalization of audio
*/
		Normalization(int newAdjustLevel);

 /**
* Getter for adjusted level 
*/
		int getAdjustLevel();

 /**
* Setter for adjusted level 
* @param newAdjustedLevel
*/		
		void setAdjustLevel(int newAdjustLevel);

/**
* Audio Processor for Mono E 
* @param size - gets size data
* @param buffer - gets range for data
*/
		void processorMonoE(int size, unsigned char* buffer);
		
/**
* Audio Processor for Stereo E
* @param sizeR - gets size data for right side
* @param bufferR - gets range for data for right side
* @param bufferL - gets range for data for left side
* @param sizeL - gets size data for left side
*/
		void processorStereoE(int sizeR, int sizeL, unsigned char* bufferR, unsigned char* bufferL);
		
/**
* Audio Processor for Mono S
* @param size - gets size data
* @param buffer - short integer for buffer 
*/
		void processorMonoS(int size, short* buffer);
		
/**
* Audio Processor for Stereo E
* @param sizeR - gets size data for right side
* @param bufferR - short integer for buffer on right side
* @param bufferL - short integer for buffer on left side
* @param sizeL - gets size data for left side
*/
		void processorStereoS(int sizeR, int sizeL, short* bufferR, short* bufferL);


};
#endif
