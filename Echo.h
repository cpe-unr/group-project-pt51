#ifndef ECHO_H
#define ECHO_H

#include "processor.h"
#include <iostream>

/**
* This is an Echo class
*/
class Echo: public Processor{

  int delay;
  int newDelay;
  public: 

/**
* Constructor that takes in the delay for the echo
*/
      Echo();
      Echo(int newDelay);


/**
* Getter and setter for delay
* @param newDelay - (insert data information) 
*/
      int getDelay();
      void setDelay(int newDelay);

/**
* Audio Processor for Mono E 
* @param size - (insert information about the size)
* @param buffer - (insert information about buffer)
*/
      void processorMonoE(int size, unsigned char* buffer);

/**
* Audio Processor for Stereo E
* @param sizeR - (insert information about the sizeR)
* @param bufferR - (insert information about bufferR)
* @param bufferL -(info about bufferL)
* @param sizeL - (insert information about the sizeL)
*/
      void processorStereoE(int sizeR, int sizeL, unsigned char* bufferR, unsigned char* bufferL);

/**
* Audio Processor for Mono S
* @param size - (insert information about the sizeR)
* @param buffer - (insert buffer info)
*/

      void processorMonoS(int size, short* buffer);

/**
* Audio Processor for Stereo E
* @param sizeR - (insert information about the sizeR)
* @param bufferR - (insert information about bufferR)
* @param bufferL -(info about bufferL)
* @param sizeL - (insert information about the sizeL)
*/
      void processorStereoE(int sizeR, int sizeL, short* bufferR, short* bufferL);
  
};

#endif
