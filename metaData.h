#pragma once 

#include <string>
#include <iostream>
#include <fstream>
/**
* This is an MetaData class
*/
class MetaData{

private:

  int mdSize;
  char mdID[4];
  std:: string buffer;

public:

/**
* This is the base constructor 
*/
  MetaData() = default;
  
  /**
* Constructor that is responsible for reading the metadata
* @param file - address of the data
*/
  MetaData(std::ifstream&);

/**
* Getter of metadata ID
*/
  std:: string getMdID() const;
  
  /**
* Setter of metadata ID
* Returns a constant char
*/
  void setMdID(char) const;

/**
* Getter of metadata size
*/
  int getMdSize () const;
  
 /**
* Setter of metadata ID
* Returns a integer
*/
  void setMdSize(int);

/**
* Getter of buffer
*/
  std::string getBuffer() const;
  
 /**
* Setter of buffer
* Returns a string
*/
  void setBuffer(std::string);
  
};
