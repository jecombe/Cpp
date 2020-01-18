#include "Peon.hpp"

//Constructor + default / Copy /Destructor
Peon::Peon(std::string name) : Victim(name){}
Peon::Peon(){return ;};
Peon::Peon(const Peon &p) : Victim(p) {*this = p;}
Peon::~Peon(){return;}

//operator
Peon &Peon::operator=(const Peon &c)
{
    _name = c._name;
    return *this;
}

//getter
void Peon::getPolymorphed() const {std::cout << getName() << " has been turned into a pink pony !" << std::endl;}
std::string Peon::getName() const {return (_name);}

