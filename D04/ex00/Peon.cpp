#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << BOLDGREEN << "Create new Object ClapTrap with name: " << RESET << std::endl;
}

Peon::Peon()
{

};

Peon::Peon(const Peon &p) : Victim(p)
{
    *this = p;
    std::cout << BOLDGREEN << "Create new Copy Object Peon" << RESET << std::endl;    
}

Peon::~Peon()
{
        std::cout << BOLDRED << "Destroy Object Peon "  << RESET << std::endl;

    return;
}


Peon &Peon::operator=(const Peon &c)
{
    _name = c._name;
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    return *this;
}

void Peon::getPolymorphed() const
{
    std::cout << getName() << " has been turned into a pink pony !" << std::endl;
}

std::string Peon::getName() const
{
    return (_name);
}

