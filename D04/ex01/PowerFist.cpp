#include "PowerFist.hpp"


PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){return;}

PowerFist::PowerFist(const PowerFist &aw){*this = aw;}

PowerFist::~PowerFist(){return;}


PowerFist &PowerFist::operator=(const PowerFist &c)
{
    AWeapon::operator=(c);
    return *this;
}
void PowerFist::attack() const {std::cout << BLUE << "* pschhh... SBAM! *" << RESET << std::endl;}