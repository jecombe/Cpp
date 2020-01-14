
#include "main.h"

void exitProgram()
{
  std::cout << '\n';
  exit(EXIT_SUCCESS);
}

void read(Person person[])
{
    std::string mystr;

    int i = 0;
  while (std::getline(std::cin, mystr))
  {
    if (mystr == "ADD")
    {
      if (i < 8)
        person[i++] = setPerson();
      else
        std::cout << BOLDRED << "FULL" << std::endl;
        std::cout <<  BOLDWHITE << "$> " << RESET;


    }
    else if (mystr == "SEARCH")
    {
      if (i > 0)
        print(person, i);
      else
        std::cout << BOLDRED << "EMPTY" << std::endl;
    }
    else if (mystr == "EXIT")
    {
      exitProgram();
    }
    else
    {
        std::cout <<  BOLDWHITE << "$> " << RESET;
    }
    
  }

}
int main()
{
  Person person[8];
  std::cout <<  BOLDWHITE << "$> " << RESET;
  read(person);

  return 0;
}