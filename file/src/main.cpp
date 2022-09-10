#include <iostream>

#include "FileWriter.h"

int main()
{
  // Set name of log file
  File::FileWriter::setFilename("test.log");
  
  // Write a message (which should not appear after clearing the file)
  if(!File::FileWriter::write("Goodbye"))
  {
    std::cout << "Write 1 failed" << std::endl;
  }

  // Clear the file
  if(!File::FileWriter::clearFile())
  {
    std::cout << "Clear failed" << std::endl;
  }
  
  // Write to file
  if(!File::FileWriter::write("Hello"))
  {
    std::cout << "Write 2 failed" << std::endl;
  }
  
  // Write again
  if(!File::FileWriter::write("Hello again"))
  {
    std::cout << "Write 3 failed" << std::endl;
  }
  
  return 0;
}