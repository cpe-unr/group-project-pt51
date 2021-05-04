#ifndef PROCESSOR_H
#define PROCESSOR_H

/**
* This is a Processor class
*/
class Processor{
	public:
	
/**
* Audio Processor for Mono E 
* @param size - (insert information about the size)
* @param buffer - (insert information about buffer)
*/
		virtual void processorMonoE(int size, unsigned char* buffer) = 0;

/**
* Audio Processor for Stereo E 
* @param sizeR - (insert information about the sizeR)
* @param bufferR - (insert information about bufferR)
* @param bufferL -(info about bufferL)
* @param sizeL - (insert information about the sizeL)
*/
		virtual void processorStereoE(int sizeR, int sizeL, unsigned char* bufferR, unsigned char* bufferL) = 0;

/**
* Audio Processor for Mono S
* @param size - (insert information about the size)
* @param buffer - (insert information about buffer)
*/
		virtual void processorMonoS(int size, short* buffer) = 0;

/**
* Audio Processor for Stereo S
* @param sizeR - (insert information about the sizeR)
* @param bufferR - (insert information about bufferR)
* @param bufferL -(info about bufferL)
* @param sizeL - (insert information about the sizeL)
*/
		virtual void processorStereoS(int sizeR, int sizeL, short* bufferR, short* bufferL) = 0;
};
#endif


