#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Wave_Header.h"

using namespace std;
//Rough Draft of CSV writing 

//Set file name and data columns
bool writeDatatoFile(string file_name, string data_one, string data_two);

//Data to input,sta
int main(int argc, char *argv[]){
  Wave_Header waveheader;
  int headerSize = sizeof(Wave_Header), fileLength = 0;

  if(argc != 2){
    cout << "Usage: ./a.out filename" << endl;
  } else {
    ifstream myFile(argv[1]);
    if(myFile.is_open()){

      myFile.close();
    } else {
      cout << "File could not be opened." << endl;
    }
  }




  bool writetoFile = writeDatatoFile("data.csv", "3", "56");

  return 0;
}

//Print out Data
cout << "File is                    :" << filelength << " bytes." << endl;

        cout << "RIFF header                :" << wavHeader.RIFF[0] 
                                                << wavHeader.RIFF[1] 
                                                << wavHeader.RIFF[2] 
                                                << wavHeader.RIFF[3] << endl;

        cout << "WAVE header                :" << wavHeader.WAVE[0] 
                                                << wavHeader.WAVE[1] 
                                                << wavHeader.WAVE[2] 
                                                << wavHeader.WAVE[3] 
                                                << endl;

        cout << "FMT                        :" << wavHeader.fmt[0] 
                                                << wavHeader.fmt[1] 
                                                << wavHeader.fmt[2] 
                                                << wavHeader.fmt[3] 
                                                << endl;

        cout << "Data size                  :" << wavHeader.ChunkSize << endl;
