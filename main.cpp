#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//Rough Draft of CSV writing 

//Set file name and data columns
bool writeDatatoFile(string file_name, string data_one, string data_two);

//Data to input,sta
int main(){
  bool writetoFile = writeDatatoFile("data.csv", "3", "56");

  return 0;
}

//Call function
bool writeDatatoFile(string file_name, string data_one, string data_two){

  //Read file and set coulmns
  ofstream file;
  file.open(file_name, ios_base::app);
  file << data_one << "," << data_two << endl;
  file.close();

  return true;
}
