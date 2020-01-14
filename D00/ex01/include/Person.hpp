#ifndef PERSON_H
#define PERSON_H
#include "main.h"
class Person
{
public:
    Person(void);
    ~Person(void);

    void setFirstName(std::string);
    void setLastName(std::string);
    void setNickname(std::string);
    void setLogin(std::string);
    void setPostalAddress(std::string);
    void setEmailAddress(std::string);
    void setPhoneNumber(std::string);
    void setBirthdayDate(std::string);
    void setFavoriteMeal(std::string);
    void setUnderwearColor(std::string);
    void setDarkestSecret(std::string);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getLogin(void);
    std::string getPostalAddress(void);
    std::string getEmailAddress(void);
    std::string getPhoneNumber(void);
    std::string getBirthdayDate(void);
    std::string getFavoriteMeal(void);
    std::string getUnderWearColor(void);
    std::string getDarkestSecret(void);

private:
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
};
Person             setPerson(void);
void                print(Person person[], int nb);


#endif
