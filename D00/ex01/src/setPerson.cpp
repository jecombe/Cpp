#include "main.h"

Person setPerson()
{
    Person pers;

    std::string mystr;

    std::cout << CYAN << "first name: " << RESET;
    getline(std::cin, mystr);
    pers.setFirstName(mystr);

    std::cout << CYAN << "last name: " << RESET;
    getline(std::cin, mystr);
    pers.setLastName(mystr);

    std::cout << CYAN << "nick name: " << RESET;
    getline(std::cin, mystr);
    pers.setNickname(mystr);

    std::cout << CYAN << "login name: " << RESET;
    getline(std::cin, mystr);
    pers.setLogin(mystr);

    std::cout << CYAN << "postal address: " << RESET;
    getline(std::cin, mystr);
    pers.setPostalAddress(mystr);

    std::cout << CYAN << "email address: " << RESET;
    getline(std::cin, mystr);
    pers.setEmailAddress(mystr);

    std::cout << CYAN << "phone number: " << RESET;
    getline(std::cin, mystr);
    pers.setPhoneNumber(mystr);

    std::cout << CYAN << "birthday date: " << RESET;
    getline(std::cin, mystr);
    pers.setBirthdayDate(mystr);

    std::cout << CYAN << "favorite meal: " << RESET;
    getline(std::cin, mystr);
    pers.setFavoriteMeal(mystr);

    std::cout << CYAN << "underwear color: " << RESET;
    getline(std::cin, mystr);
    pers.setUnderwearColor(mystr);

    std::cout << CYAN << "Darkest Secret: " << RESET;
    getline(std::cin, mystr);
    pers.setDarkestSecret(mystr);

    return (pers);
}
