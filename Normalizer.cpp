#include <iostream>

#include "Normalizer.h"

void Limiter::processBuffer(unsigned char* buffer, int bufferSize){

	for(int i = 0; i < bufferSize; i++){
	
		if(buffer[i] > 229){
		
			buffer[i] = 229;

		}

		else if(buffer[i] < 26){
			
			buffer[i] = 26;
	
		}

}
