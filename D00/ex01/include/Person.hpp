#ifndef PERSON_H
#define PERSON_H

#include "main.h"
class Person
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthdayDate;
    std::string favoriteMeal;
    std::string underWearColor;
    std::string darkestSecret;
    void setPerson();

    void read();
};

#endif