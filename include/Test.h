#include <string>

namespace Test {
  
  // Max object count
  const uint8_t OBJECT_COUNT_MAX = 3;

  // Error enumerations
  enum Error
  {
    ERROR = 0,
    WARNING,
    OK 
  };

  // Error data struct
  struct errorData 
  {
    Error error;
    std::string message;
  };
  
  // Test Class
  class TestClass
  {
    private:
      static int objectCount;
      std::string objectName;

      /*
       * Constructor
       *   Private to prevent exceeding desired amount of objects,
       *   see createInstance() below
       */ 
      inline TestClass(){objectCount++; objectName = "No Name";}
      inline TestClass(std::string name){objectCount++; objectName = name;}

    public:
      /*
       * Destructor
       *   Will decrement objectCount
       */
      ~TestClass();

      /*
       * createInstance
       *   inputs  - (optional) Name of instance
       *   returns - A pointer to the TestClass object if valid, nullptr if invalid
       */
      static TestClass* createInstance();
      static TestClass* createInstance(std::string name);

      /*
       * Get functions
       */ 
      static inline int getObjectCount(){return objectCount;}
      inline std::string getObjectName(){return objectName;}

      /*
       * Set functions
       */
      inline void setObjectName(std::string name){objectName = name;}

      /*
       * printName
       *   inputs  - None
       *   returns - N/A
       */
      void printName(){std::cout << objectName << std::endl;}
  };
}