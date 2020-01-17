#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << BOLDGREEN << "Some random victim called " <<  _name <<  " just popped !" << RESET << std::endl;
}

Victim::Victim()
{
    _name = "NAMEVIC";
    std::cout << BOLDGREEN << "Default Object ClapTrap with name: " << RESET << std::endl;
};

Victim::Victim(const Victim &v)
{
    *this = v;
    std::cout << BOLDGREEN << "Create new Copy Object Victim" << RESET << std::endl;    
}

Victim::~Victim()
{
    std::cout << BOLDRED << "Victim " << _name <<  " just died for no apparent reason ! "  << RESET << std::endl;
    return;
}


Victim &Victim::operator=(const Victim &c)
{
    _name = c._name;
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    return *this;
}

void Victim::getPolymorphed() const
{
        std::cout <<  _name  <<  " has been turned into a cute little sheep !" << std::endl; 
}

std::string Victim::getName() const
{
    return _name;
}

std::ostream &operator<<(std::ostream &o, Victim const &v)
{
    o << "I am " << v.getName() << " "  <<  ", and I like otters !" << std::endl;  
    return o;
}

