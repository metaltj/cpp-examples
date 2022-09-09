#include <iostream>
#include <vector>

#include "Test.h"

// Vector to hold pointers to objects
std::vector<Test::TestClass*> testObjects;

void createAll()
{
  // Create valid objects
  for(int i = 0 ; i < Test::OBJECT_COUNT_MAX; i++)
  {
    Test::TestClass* instance = Test::TestClass::createInstance("Test Instance " + std::to_string(i));
    
    // Check if error occured when creating the object
    if(instance != nullptr)
    {
      testObjects.push_back(instance);
    }
    else
    {
      std::cout << "[ERROR]: Tried to create too many instances" << std::endl;
    }
  }
}

void deleteAll()
{
  // Object cleanup
  for(Test::TestClass* i : testObjects)
  {
    delete i;
  }

  // Clear test classes vector
  testObjects.clear();
}

int main()
{
  createAll();

  // Print number of object created
  std::cout << "[INFO]: Created " << Test::TestClass::getObjectCount() << " instances" << std::endl;

  // Cleanup
  deleteAll();

  return 0;
}
