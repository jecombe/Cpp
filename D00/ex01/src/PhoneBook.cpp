#include "../include/phoneBook.hpp"
#include "main.h"

std::string resizeWord(std::string str)
{
    std::string param;

    param = str;

    if (param.length() >= 10)
    {
        param.resize(9);
        param.resize(10, '.');
    }
    return param;
}

void PhoneBook::print() const
{
    int i = 0;

    std::cout << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << "nick name" << std::endl;

    while (i != 8)
    {
        std::cout << std::setw(10) << i;
        std::cout << "|";
        std::cout << std::setw(10) << resizeWord(this->person[i].firstName);
        std::cout << "|";
        std::cout << std::setw(10) << resizeWord(this->person[i].lastName);
        std::cout << "|";
        std::cout << std::setw(10) << resizeWord(this->person[i].nickName) << std::endl;
        i++;
    }
}
