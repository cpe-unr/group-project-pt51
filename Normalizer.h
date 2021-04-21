#pragma once

#include "Wav.h"
#include "Processor.h"

using namespace std;

class Limiter: public Processor{

public:	

	void processBuffer(unsigned char* buffer, int bufferSize) override;

};
