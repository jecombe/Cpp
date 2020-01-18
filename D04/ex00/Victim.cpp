#include "Victim.hpp"

//Constructor + default / Copy / Destructor 
Victim::Victim(std::string name) : _name(name) 
{
    std::cout << BOLDGREEN << "Some random victim called " <<  _name <<  " just popped !" << RESET << std::endl;
}
Victim::Victim() {_name = "NAMEVIC";};
Victim::Victim(const Victim &v) {*this = v;}
Victim::~Victim() {std::cout << BOLDRED << "Victim " << _name <<  " just died for no apparent reason ! "  << RESET << std::endl;}

//operator
Victim &Victim::operator=(const Victim &c)
{
    _name = c._name;
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    return *this;
}
std::ostream &operator<<(std::ostream &o, Victim const &v)
{
    return (o << "I am " << v.getName() << " "  <<  ", and I like otters !" << std::endl);  
}

//Getter
void Victim::getPolymorphed() const {std::cout <<  _name  <<  " has been turned into a cute little sheep !" << std::endl; }
std::string Victim::getName() const {return _name;}



