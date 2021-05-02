#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Wave_Header.h"

using namespace std;
 Draft of CSV writing 

 file name and data columns
bool writeDatatoFile(string file_name, string data_one, string data_two);

 to input,sta
int main(int argc, char *argv[]){
  Wave_Header waveheader;
  int headerSize = sizeof(Wave_Header), fileLength = 0;

  if(argc != 2){
    cout << "Usage: ./a.out filename" << endl;
  } else {
    ifstream myFile(argv[1]);
    if(_open()){

      myFile.close();
    } else {
      cout << "File could not be opened." << endl;
    }
  }




  bool writetoFile = writeDatatoFile("data.csv", "3", "56");

  return 0;
}

 out Data
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

// user may choose to process a file using 1 or more processors
int userInputC;
cout << "How many processors would you like to use?" << endl;
cin >> userInputC;

// ask the user how many files they want to modify
int numberOfFiles;
cout << "How many files would you like to process?" << endl;
cin >> numberOfFiles;

/* repeat this process as many times as the number of files the user
requested to modify */

for(int i = 0; i <= numberOfFiles; i++){

	// prompt the user for a file to modify
	string filename;
	cout << "Please enter the name of file you would like to modify." << endl;
	cin >> filename;

	// ask the user how many processors they'd like to use
	int numberOfProcessors;
	cout << "How many processors would you like to use? (enter a number 1-3)" << endl;
	cin >> numberOfProcessors;

	switch(numberOfProcessors){
		
		case 0:
			break;

		case 1:
			wav.readFile(filename);
			Processor *processor1 = new Normalizer;
			processor1->processBuffer(wav.getBuffer(),wav.getBufferSize());

			
			// prompt the user to name the new processed audio file
			string userNamedFile;
			cout << "Please enter new file name: " << endl;
			cin >> userNamedFile;
	
			// save the new processed audio file 
			wav.writeFile(userNamedFile);
			delete processor1;

		case 2:
			wav.readFile(filename);
			Processor *processor1 = new Normalizer;
			processor1->processBuffer(wav.getBuffer(),wav.getBufferSize());
			Processor *processor2 = new Echo(7500);
			processor2->processBuffer(wav.getBuffer(),wav.getBufferSize());
			
			string userNamedFile;
			cout << "Please enter new file name: " << endl;
			cin >> userNamedFile;
			wav.writeFile(userNamedFile);
			delete processor1;
			delete processor2;

		case 3:

			wav.readFile(filename);
			Processor *processor1 = new Normalizer;
			processor1->processBuffer(wav.getBuffer(),wav.getBufferSize());
			Processor *processor2 = new Echo(7500);
			processor2->processBuffer(wav.getBuffer(),wav.getBufferSize());
			Processor *processor3 = new Noise_Gate(10);
			processor3->processBuffer(wav.getBuffer(),wav.getBufferSize());			

			string userNamedFile;
			cout << "Please enter new file name: " << endl;
			cin >> userNamedFile;
			wav.writeFile(userNamedFile);
			delete processor1;
			delete processor2;
			delete processor3;

	}
