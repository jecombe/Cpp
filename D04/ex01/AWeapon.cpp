#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apPoint(apcost), _damagePoint(damage){}
AWeapon::AWeapon(){return;};
AWeapon::AWeapon(const AWeapon &aw){*this = aw;}
AWeapon::~AWeapon(){return;}

AWeapon &AWeapon::operator=(const AWeapon &c)
{
    _name = c._name;
    _damagePoint = c._damagePoint;
    _apPoint = c._apPoint;
    return *this;
}

std::string AWeapon::getName() const {return _name;}
int AWeapon::getAPCost() const {return _apPoint;}
int AWeapon::getDamage() const {return _damagePoint;}