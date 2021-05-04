#pragma once 

#include <string>
#include <iostream>
#include <fstream>

class MetaData{

private:

  int mdSize;
  char mdID[4];
  std:: string buffer;

public:

  MetaData() = default;
  MetaData(std::ifstream&);

  std:: string getMdID() const;
  void setMdID(char) const;

  int getMdSize () const;
  void setMdSize(int);

  std::string getBuffer() const;
  void setBuffer(std::string);
  
};
