#include "main.h"

void personIndex(Person person[], int nb)
{
    int index;

    std::cout << "Select index person to see details: ";
    std::cin >> index;
    std::cout << std::endl;
    if ((index >= 0 && index < nb) && std::cin.good())
    {
        std::cout << CYAN <<  "first name: " << RESET;
        std::cout << person[index].getFirstName() << std::endl;

        std::cout  << CYAN <<  "last name: " << RESET;
        std::cout << person[index].getLastName() << std::endl;

        std::cout << CYAN <<  "nick name: " << RESET;
        std::cout << person[index].getNickName() << std::endl;

        std::cout  << CYAN <<  "login: " << RESET;
        std::cout << person[index].getLogin() << std::endl;

        std::cout  << CYAN <<  "postal address: " << RESET;
        std::cout << person[index].getPostalAddress() << std::endl;

        std::cout << CYAN << "email address: " << RESET;
        std::cout << person[index].getEmailAddress() << std::endl;
    
        std::cout << CYAN <<  "phone name: " << RESET;
        std::cout << person[index].getPhoneNumber() << std::endl;

        std::cout << CYAN <<  "birthday date: " << RESET;
        std::cout << person[index].getBirthdayDate() << std::endl;

        std::cout << CYAN <<  "favorite meal: " << RESET;
        std::cout << person[index].getFavoriteMeal() << std::endl;
        
        std::cout << CYAN <<  "under wear color: " << RESET;
        std::cout << person[index].getUnderWearColor() << std::endl;

        std::cout << CYAN <<  "darkest secret: " << RESET;
        std::cout << person[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Person not found! " << std::endl;
    }
}

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

void print(Person person[], int nb)
{
    std::cout << nb << std::endl;

    std::cout <<  BOLDBLUE << std::setw(10) << "index" << RESET;
    std::cout << BOLDCYAN << "|" << RESET;
    std::cout <<  BOLDBLUE <<  std::setw(10) << "first name" << RESET;
    std::cout << BOLDCYAN << "|" << RESET;
    std::cout <<  BOLDBLUE <<  std::setw(10) << "last name" << RESET;
    std::cout << BOLDCYAN << "|" << RESET;
    std::cout <<  BOLDBLUE <<  std::setw(10) << "nick name" << RESET << std::endl;

    for (int i = 0; i < nb; i += 1)
    {
        std::cout << std::setw(10) << i;
        std::cout << BOLDCYAN << "|" << RESET;
        std::cout << std::setw(10) << resizeWord(person[i].getFirstName());
        std::cout << BOLDCYAN << "|" << RESET;
        std::cout << std::setw(10) << resizeWord(person[i].getLastName());
        std::cout << BOLDCYAN << "|" << RESET;
        std::cout << std::setw(10) << resizeWord(person[i].getNickName()) << std::endl;
        
    }
    personIndex(person, nb);
}
