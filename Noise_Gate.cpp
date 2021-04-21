#include <iostream>

#include "Noise_Gate.h"

Noise_Gate(int threshold):threshold(threshold){

}

void Noise_Gate::processBuffer(unsigned char* buffer, int bufferSize){

	for(int i = 0; i < bufferSize; i++){
	
		if(buffer[i] < (128 + 5) && (buffer[i] > (128 - 5))) {
	
			buffer[i] = 128;

		}

	}

}
