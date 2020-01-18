#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){return;};
PlasmaRifle::PlasmaRifle(const PlasmaRifle &aw) {*this = aw;}
PlasmaRifle::~PlasmaRifle(){return;}


PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &c)
{
    _name = c._name;
    _damagePoint = c._damagePoint;
    _apPoint = c._apPoint;
    return *this;
}

std::string PlasmaRifle::getName() const{return _name;}
int PlasmaRifle::getAPCost() const {return _apPoint;}
int PlasmaRifle::getDamage() const {return _damagePoint;}
void PlasmaRifle::attack() const {std::cout << BLUE << "* piouuu piouuu piouuu *" << RESET << std::endl;}



