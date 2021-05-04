#include "metaData.h"

MetaData::MetaData(std::ifstream& file){
  
  (mdID, sizeof(mdID));
  ((char*)&mdSize, sizeOf(mdSize));
  buffer.resize(mdSize);
  fileread(&buffer[0], mdSize);
  
}

std::string MetaData:: getMdID() const;{

  std::string dstring;
  for(char chunk: mdID){
    
    dstring.push_back(chunk);
    
  }
  str.push_back('\0');
  return dstring;
  
}

void MetaData:: setMdID(char mdID){
  
  this->mdID = mdID;
  
}

int MetaData::getMdSize() const{
  
  return mdSize;
  
}

void MetaData::setMdSize(int mdSize){

  this->mdSize = mdSize;
  
}

std:: string MetaData::getBuffer() const{
  
  return buffer;
  
}

void MetaData::setBuffer(std::string buffer){
  
  this->buffer = buffer;
  
}
