#pragma once

#include "Wav.h"
#include "Processor.h"

using namespace std;

/**
* This is a Limiter class
*/
class Limiter: public Processor{

public:	


/**
* Process Buffer
* @param bufferSize - (insert information about the size)
* @param buffer - (insert information about buffer)
*/

	void processBuffer(unsigned char* buffer, int bufferSize) override;

};
