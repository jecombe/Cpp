#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{

    std::cout << BOLDGREEN << _name << ", " << _title << ", " << "is born !" << RESET << std::endl;
}

Sorcerer::Sorcerer()
{
    _name = "UGLY";
    _title = "killer";
    std::cout << BOLDGREEN << _name << ", " << _title << ", " << "is born !" << RESET << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s)
{
    *this = s;
    std::cout << BOLDGREEN << "Create new Copy Object Sorcerer" << RESET << std::endl;    
}

Sorcerer::~Sorcerer()
{
    std::cout << BOLDRED << _name << ", " << _title << ", " << "is dead. Consequences will never be the same !" << RESET << std::endl;
}


Sorcerer &Sorcerer::operator=(const Sorcerer &s)


{
    std::cout << BOLDYELLOW << "Assignation Sorcerer operator called" << std::endl;
    _name = s._name;
    _title = s._title;
    return *this;
}


std::ostream &operator<<(std::ostream &o, Sorcerer const &s)
{
    o << "I am " << s.getName() << ", " << s.getTitle() <<  ", and I like ponies !" << std::endl;  
    return o;
}

  //Setter
void Sorcerer::setName(std::string name)
{
    _name = name;

}
void Sorcerer::setTitle(std::string title)
{
    _title = title;
}
//Getter
std::string Sorcerer::getName() const
{
    return (_name);
}

std::string Sorcerer::getTitle() const
{
    return (_title);
}

void Sorcerer::polymorph(Victim const &v) const 
{
    v.getPolymorphed();
}

