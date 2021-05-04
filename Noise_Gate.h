#pragma once

#include "Wav.h"
#include "Processor.h"

using namespace std;
/**
* This is a Noise Gate class
*/
class Noise_Gate: public Processor{

	int threshold;

public:
	
/**
* Constructor that takes in the threshold of the Noise Gate
*/
	Noise_Gate(int threshold);


/**
* Process Buffer
* @param bufferSize - (insert information about the size)
* @param buffer - (insert information about buffer)
*/
	void processBuffer(unsigned char* buffer, int bufferSize) override;

};

