#pragma once 

#include "metaData.h"
#include "metaDataHeader.h"
#include <vector>
/**
* This is an MetaData Manager class
*/
class MdManager{

private:

  MetaDataHeader mheader;
  std::vector<MetaData> meta_data;

public:

/**
* This is the base constructor 
*/

  MdManager() = default;
  
  /**
* This contructor calls in the address of the data point 
*  @param file - address of the data
*/
  MdManager(std::ifstream&);

/**
* This function prints the metadata
*/
  void printMd();
  
  /**
* This function gets the size of the data (constant)
*/
  int getSize() const;
  
};
