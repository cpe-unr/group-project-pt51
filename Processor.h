#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <cstdint>
#include <math>

/**
* This is a Processor class
*/
class Processor{

public:

/**
* Process Buffer
* @param bufferSize - (insert information about the size)
* @param buffer - (insert information about buffer)
*/
	virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual ~Processor() {};

};

#endif // PROCESSOR_H

