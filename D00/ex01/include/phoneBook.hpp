#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "main.h"

class PhoneBook
{
public:
    Person person[8];
   // void setPerson(Person person);
    void print() const;
    int i;
};


#endif