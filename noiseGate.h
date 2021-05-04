#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "processor.h"
#include <iostream>
/**
* This is a Noise Gate class
*/
class NoiseGate: public Processor{
	double gateLevel;
	double level;
	public:
	
/**
* This is the base constructor 
*/	
		NoiseGate();
		
 /**
* This constructor gets the noise gate level
* @param level - level of noise gate as a double data type
*/
		NoiseGate(double level);

 /**
* Getter that gets noise gate level
*/
		double getLevel();
		
 /**
* Setter that gets noise gate level
* @param level - level of noise gate as a double data type
*/
		void setLevel(double level);

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
* Audio Processor for Stereo S 
* @param sizeR - gets size data for right side
* @param bufferR - short integer for buffer on right side
* @param bufferL - short integer for buffer on left side
* @param sizeL - gets size data for left side
*/
		void processorStereoS(int sizeR, int sizeL, short* bufferR, short* bufferL);


};
#endif
