#include <string>

namespace File {
  
  // File Writer Class
  class FileWriter
  {
    private:
      static std::string filename; // Name of file to write to
      
      /*
       * Constructor
       *   Private to allow only one instance of object,
       *   preventing writing to the file at same time
       */ 
      FileWriter(){}

    public:
      /*
       * setFilename
       *   input - desired name of file
       *   returns - N/A
       */
      static void setFilename(std::string name){filename = name;}
      
      /*
       * clearFile
       *   input - None
       *   returns - true upon success, false upon failure
       */
      static bool clearFile();

      /*
       * write
       *   input - text to write
       *   returns - true upon success, false upon failure
       */
      static bool write(std::string text);
  };
}