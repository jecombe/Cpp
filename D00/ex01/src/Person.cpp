#include "main.h"
/*
void Person::read()
{
  //std::string people[11];
  std::string mystr;

  std::cout << "first name: ";
  getline(std::cin, mystr);
  this->firstName = mystr;

  std::cout << "last name: ";
  getline(std::cin, mystr);
    this->lastName = mystr;

  //people[1] = mystr;

  std::cout << "nick name: ";
  getline(std::cin, mystr);
this->nickName = mystr;

  //people[2] = mystr;

  std::cout << "login name: ";
  getline(std::cin, mystr);
  this->login = mystr;
  //people[3] = mystr;

  std::cout << "postal address: ";
  getline(std::cin, mystr);
  this->postalAddress = mystr;
 // people[4] = mystr;

  std::cout << "email address: ";
  getline(std::cin, mystr);
  this->emailAddress = mystr;
  //people[5] = mystr;

  std::cout << "phone number: ";
  getline(std::cin, mystr);
  this->phoneNumber = mystr;
  //people[6] = mystr;

  std::cout << "birthday date: ";
  getline(std::cin, mystr);
  this->birthdayDate = mystr;
 // people[7] = mystr;

  std::cout << "favorite meal: ";
  getline(std::cin, mystr);
  this->favoriteMeal = mystr;
  //people[8] = mystr;

  std::cout << "underwear color: ";
  getline(std::cin, mystr);
  this->underWearColor = mystr;
 // people[9] = mystr;

  std::cout << "Darkest Secret: ";
  getline(std::cin, mystr);
  this->darkestSecret = mystr;
  //people[10] = mystr;

  //Person contact(people[0], people[1], people[2], people[3], people[4], people[5], people[6], people[7], people[8], people[9], people[10]);
  //return contact;
}
*/

void Person::setPerson()
{
    //person[i++] = people;

    std::string mystr;

    std::cout << "first name: ";
    getline(std::cin, mystr);
    this->firstName = mystr;

    std::cout << "last name: ";
    getline(std::cin, mystr);
    this->lastName = mystr;

    //people[1] = mystr;

    std::cout << "nick name: ";
    getline(std::cin, mystr);
    this->nickName = mystr;

    //people[2] = mystr;

    std::cout << "login name: ";
    getline(std::cin, mystr);
    this->login = mystr;
    //people[3] = mystr;

    std::cout << "postal address: ";
    getline(std::cin, mystr);
    this->postalAddress = mystr;
    // people[4] = mystr;

    std::cout << "email address: ";
    getline(std::cin, mystr);
    this->emailAddress = mystr;
    //people[5] = mystr;

    std::cout << "phone number: ";
    getline(std::cin, mystr);
    this->phoneNumber = mystr;
    //people[6] = mystr;

    std::cout << "birthday date: ";
    getline(std::cin, mystr);
    this->birthdayDate = mystr;
    // people[7] = mystr;

    std::cout << "favorite meal: ";
    getline(std::cin, mystr);
    this->favoriteMeal = mystr;
    //people[8] = mystr;

    std::cout << "underwear color: ";
    getline(std::cin, mystr);
    this->underWearColor = mystr;
    // people[9] = mystr;

    std::cout << "Darkest Secret: ";
    getline(std::cin, mystr);
    this->darkestSecret = mystr;
    std::cout << "$> ";
}
