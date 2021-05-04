#include "echo.h"
#include <cmath>

Echo::Echo(){
  delay = newDelay;
}

int Echo::getDelay(){
  return delay;
}

void Echo::setDelay(int newDelay){
  delay = newDelay;
}

void Echo::processorMonoE(int size, unsigned char* buffer){

  float adjust;
  float adjustDelayed;
  float echoLevel = .3f;
  float value;
  
  for(int i = 0; i < size - delay; i++){
    adjust = (float)(buffer[i] - 128);
    adjustDelayed = (float)(buffer[i+delay] - 128);
    value = adjust * echoLevel + adjustDelayed * .3f + 128;
    buffer[i + delay] = (unsigned char)(round(value));
  }
  
}

void Echo::processorStereoE(int sizeR, int sizeL, unsigned char* bufferR, unsigned char* bufferL){

  float adjust;
  float adjustDelayed;
  float echoLevel = .3f;
  float value;
  
  for(int i = 0; i < sizeR - delay; i++){
    adjust = (float)(bufferR[i] - 128);
    adjustDelayed = (float)(bufferR[i+delay] - 128);
    value = adjust * echoLevel + adjustDelayed * .3f + 128;
    bufferR[i + delay] = (unsigned char)(round(value));
  }

  for(int i = 0; i < sizeL - delay; i++){
    adjust = (float)(bufferL[i] - 128);
    adjustDelayed = (float)(bufferL[i+delay] - 128);
    value = adjust * echoLevel + adjustDelayed * .3f + 128;
    bufferL[i + delay] = (unsigned char)(round(value));
  }
  
}

void Echo::processorMonoS(int size, short* buffer){

  float adjust;
  float adjustDelayed;
  float echoLevel = .3f;
  float value;
  
  for(int i = 0; i < size - delay; i++){
    adjust = (float)(buffer[i] - 16385);
    adjustDelayed = (float)(buffer[i+delay] - 16385);
    value = adjust * echoLevel + adjustDelayed * .3f + 16385;
    buffer[i + delay] = (unsigned char)(round(value));
  }
  
}

void Echo::processorStereoS(int sizeR, int sizeL, short* bufferR, short* bufferL){

  float adjust;
  float adjustDelayed;
  float echoLevel = .3f;
  float value;
  
  for(int i = 0; i < sizeR - delay; i++){
    adjust = (float)(bufferR[i] - 16385);
    adjustDelayed = (float)(bufferR[i+delay] - 16385);
    value = adjust * echoLevel + adjustDelayed * .3f + 16385;
    bufferR[i + delay] = (unsigned char)(round(value));
  }

  for(int i = 0; i < sizeL - delay; i++){
    adjust = (float)(bufferL[i] - 16385);
    adjustDelayed = (float)(bufferL[i+delay] - 16385);
    value = adjust * echoLevel + adjustDelayed * .3f + 16385;
    bufferL[i + delay] = (unsigned char)(round(value));
  }
  
}
