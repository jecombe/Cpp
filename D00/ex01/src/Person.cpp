#include "main.h"

Person::Person(void) { return ; }
Person::~Person(void) { return ; }

std::string Person::getFirstName(void)
{
  return (this->firstName);
}

std::string Person::getLastName(void)
{
  return (this->lastName);
}

std::string Person::getNickName(void)
{
  return (this->nickName);
}

std::string Person::getLogin(void)
{
  return (this->login);
}

std::string Person::getPostalAddress(void)
{
  return (this->postalAddress);
}

std::string Person::getEmailAddress(void)
{
  return (this->emailAddress);
}

std::string Person::getPhoneNumber(void)
{
  return (this->phoneNumber);
}

std::string Person::getBirthdayDate(void)
{
  return (this->birthdayDate);
}

std::string Person::getFavoriteMeal(void)
{
  return (this->favoriteMeal);
}

std::string Person::getUnderWearColor(void)
{
  return (this->underWearColor);
}

std::string Person::getDarkestSecret(void)
{
  return (this->darkestSecret);
}

void Person::setFirstName(std::string str)
{
  this->firstName = str;
}

void Person::setLastName(std::string str)
{
  this->lastName = str;
}

void Person::setNickname(std::string str)
{
  this->nickName = str;
}

void Person::setLogin(std::string str)
{
  this->login = str;
}

void Person::setPostalAddress(std::string str)
{
  this->postalAddress = str;
}

void Person::setEmailAddress(std::string str)
{
  this->emailAddress = str;
}

void Person::setPhoneNumber(std::string str)
{
  this->phoneNumber = str;
}

void Person::setBirthdayDate(std::string str)
{
  this->birthdayDate = str;
}

void Person::setFavoriteMeal(std::string str)
{
  this->favoriteMeal = str;
}

void Person::setUnderwearColor(std::string str)
{
  this->underWearColor = str;
}

void Person::setDarkestSecret(std::string str)
{
  this->darkestSecret = str;
}