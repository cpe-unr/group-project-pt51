#pragma once

#include "Wav.h"
#include "Processor.h"

using namespace std;

class Noise_Gate: public Processor{

	int threshold;

public:
	
	Noise_Gate(int threshold);
	void processBuffer(unsigned char* buffer, int bufferSize) override;

};
