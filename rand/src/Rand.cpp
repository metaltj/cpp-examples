#include "Rand.h"

#include <iostream>
#include <stdlib.h>

Rand::genRand::genRand(int numBytes, unsigned int seed)
  : buffer(nullptr)
{  
  // Set number of bytes to generate
  this->numBytes = numBytes;
  
  // Create buffer
  buffer = new uint8_t[numBytes];
  
  // Initialize seed
  srand(seed);
}

Rand::genRand::~genRand()
{
  // Delete buffer
  if(buffer != nullptr)
  {
    delete[] buffer;
  } 
}

uint8_t* Rand::genRand::operator()()
{
  if(buffer != nullptr)
  {
    // Generate next set of random bytes
    for(int i = 0; i < numBytes; i++)
    {
      buffer[i] = rand() % (BYTE_MAX_VAL + 1);
    }
  }

  // Return pointer to buffer
  return buffer;
}