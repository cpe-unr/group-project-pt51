//CS 202 Final Project
//29 April 2021

#ifndef WAVE_HEADER_H
#define WAVE_HEADER_H

typedef struct Wave_Header 
{

    char riff[4];
    int wavSize;
    char wave[4];
    char fmt[4];
    int fmtChunkSize;
    short audioFormat;
    short numChannels;
    int sampleRate;
    int byteRate;
    short sampleAlignment;
    short bitDepth;
    char data_header[4];
    int data_bytes;

} Wave_Header;

#endif
