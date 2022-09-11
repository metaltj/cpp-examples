#include <stdint.h>

// Rand namespace
namespace Rand
{
  // Max value that can be represented by a byte
  const int BYTE_MAX_VAL = 255;

  // Random generation functor
  class genRand
  {  
    public:
      /*
       * Contructor
       * Initialized number of bytes and rand seed
       */
      genRand(int numBytes, unsigned int seed);

      /*
       * Destructor
       * This deletes the buffer
       */
      ~genRand();
      
      /*
       * Function call overload
       * Returns pointer to buffer
       */
      uint8_t* operator()();

    private:
      /* 
       * Default constructor private to
       * force usage of above contructor
       */
      genRand();

      int numBytes;    // Number of bytes to generate
      uint8_t* buffer; // Buffer for random bytes
  };
}