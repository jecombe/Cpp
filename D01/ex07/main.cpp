#include "main.hpp"

int main (int argc, char *argv[]){
  if (argc == 4)
  {
    std::string line;
    std::fstream myfile(argv[1], std::fstream::in | std::fstream::out | std::fstream::ate | std::ios::app);
    std::string target = argv[2];
    std::string fileName = argv[1];

     std::ofstream fileout(fileName + ".replace"); //Temporary file
    if (myfile && fileout)
    {
      while (getline(myfile, line))
      {
        size_t f;
        while((f = line.find(target)) != std::string::npos)
        {
        std::cout << "0 " << line << std::endl;

          line.replace(f, f + target.length(), argv[3]);
          std::cout << "1 " << line << std::endl;
        }
        fileout << line << std::endl;
      }
      // if ((myfile.rdstate() & std::ifstream::failbit ) != 0)
      //   std::cout << "Error reading line." << std::endl;
      myfile.close();
      fileout.close();
    }
    else
    {
      std::cout << "Error opening file." << std::endl;
    }
  }
  else
  {
    std::cout << "Usage : ./replace (filename) (target) (replacement)" << std::endl;
  }
  return 0;
}