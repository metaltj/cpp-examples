#include <iostream>

#include "Test.h"

// Default object count to 0
int Test::TestClass::objectCount = 0;

Test::TestClass::~TestClass()
{
  // Announce deletion of object
  std::cout << "[INFO]: Deleting class " + objectName << std::endl;

  // Decrement object count
  objectCount--;
}

Test::TestClass* Test::TestClass::createInstance()
{
  TestClass* instance = nullptr;
  if (objectCount < OBJECT_COUNT_MAX)
  {
    instance = new TestClass();
  }
  return instance;
}

Test::TestClass* Test::TestClass::createInstance(std::string name)
{
  TestClass* instance = nullptr;
  if (objectCount < OBJECT_COUNT_MAX)
  {
    instance = new TestClass(name);
  }
  return instance;
}