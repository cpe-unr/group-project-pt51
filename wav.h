#pragma once


#include <string>
#include <vector>

#include "wavHeader.h"

/**
* This is a Wav class
*/

class Wav{
protected:
    int bufferSize_data;
    unsigned char* buffer = NULL;
    int bitDepth;
    int numChannels;
    std::vector <SubChunkData> metadata;
    wavHeader wave_Header;
    dataChunk data_Chunk;
    FMT fmt;
public:

 /**
* Getter for wave_header
*/
    wavHeader getwavHeader();
 /**
* Getter for character buffer
*/
    unsigned char *getBuffer();
 /**
* Getter for buffer size
*/
    int getBufferSize();
 /**
* Getter for bit depth
*/
    int getBitDepth();

 /**
* Getter for number of channels 
*/
    int getNumChannels();
	
  /**
* This function reads in the file
* @param filename - string type for the file loaded
*/
    void readFile(const std::string &filename);
	
  /**
* This function writes in the file
* @param outFilename - string type for the file loaded
*/
    void writeFile(const std::string &outFilename);

  /**
* Wav deconstructor 
*/
    ~Wav();
    
};
