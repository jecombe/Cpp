
#include "main.h"



void exitProgram()
{
  std::cout << '\n';
  exit(EXIT_SUCCESS);
}

void doesMatch(const std::string mystr, PhoneBook *book)
{
  

  if (mystr == "ADD")
  {
    std::cout << "YOU CAN ADD CONTACT IN YOUR PHONEBOOK" << std::endl;
    book->person[0].setPerson();
  //  std::cout << book->person[0].firstName;
  }
  else if (mystr == "SEARCH")
  {
        //std::cout << book->person[0].firstName;


    book->print();
  }
  else if (mystr == "EXIT")
  {
    exitProgram();
  }
}

int main()
{
  PhoneBook book;
  std::string line;
  std::cout << "$> ";
  while (std::getline(std::cin, line))
  {
     doesMatch(line, &book);
    std::cout << "$> ";

  }
  return 0;
}