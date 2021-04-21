#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <cstdint>
#include <math>

class Processor{

public:
	virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual ~Processor() {};

};

#endif // PROCESSOR_H
