#include <iostream>
#include <fstream>
#include <sstream>

#include "FileWriter.h"

std::string File::FileWriter::filename;

bool File::FileWriter::clearFile()
{
  if(!filename.empty())
  {
    // Open the file
    std::ofstream Outfile(filename);
    
    // Close the file
    Outfile.close();

    return true;
  }

  return false;
}

bool File::FileWriter::write(std::string text)
{
  if(!filename.empty())
  {
    // Open file in append mode
    std::ofstream OutFile(filename, std::ios_base::app);
    
    // Write text to file
    OutFile << text << std::endl;
    
    // Close the file
    OutFile.close();

    return true;
  }

  return false;
}