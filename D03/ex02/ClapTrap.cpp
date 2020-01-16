#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hitsPoints, unsigned int maxHits, unsigned int energyPoint, unsigned int maxEnergy, unsigned int level, unsigned int meleeAttack, unsigned int rangedAttack, unsigned int armorDamage)
{
    _hitsPoints = hitsPoints;
    _maxHitsPoint = maxHits;
    _energyPoint = energyPoint;
    _maxEnergyPoint = maxEnergy;
    _level = level;
    _meleeAttackDamage = meleeAttack;
    _rangedAttackDamage = rangedAttack;
    _armorDamageReduction = armorDamage;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    _hitsPoints = c.getHitsPoints();
    _maxHitsPoint = c.getMaxHitsPoint();
    _energyPoint = c.getEnergyPoint();
    _maxEnergyPoint = c.getMaxEnergyPoint();
    _level = c.getLevel();
    _meleeAttackDamage = c.getMeleeAttackDamage();
    _rangedAttackDamage = c.getRangedAttackDamage();
    _armorDamageReduction = c.getArmorDamageReduction();
    _name = c.getName();
}

ClapTrap::~ClapTrap()
{
    return;
}
//SETTER
void ClapTrap::setName() {}
void ClapTrap::setHitsPoints(unsigned int point) { _hitsPoints = point; }
void ClapTrap::setMaxHitsPoint() {}
void ClapTrap::setEnergyPoint(unsigned int pointEnergy) { _energyPoint = pointEnergy; }
void ClapTrap::setMaxEnergyPoint() {}
void ClapTrap::setLevel() {}
void ClapTrap::setMeleeAttackDamage() {}
void ClapTrap::setRangedAttackDamage() {}
void ClapTrap::setArmorDamageReduction() {}

//GETTER
std::string ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitsPoints() const { return _hitsPoints; }
unsigned int ClapTrap::getMaxHitsPoint() const { return _maxHitsPoint; }
unsigned int ClapTrap::getEnergyPoint() const { return _energyPoint; }
unsigned int ClapTrap::getMaxEnergyPoint() const { return _maxHitsPoint; }
unsigned int ClapTrap::getLevel() const { return _level; }
unsigned int ClapTrap::getMeleeAttackDamage() const { return _meleeAttackDamage; }
unsigned int ClapTrap::getRangedAttackDamage() const { return _rangedAttackDamage; }
unsigned int ClapTrap::getArmorDamageReduction() const { return _armorDamageReduction; }

//METHODS
void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " at range, causing " << _rangedAttackDamage << RESET << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << CYAN << "FR4G-TP " << _name << " attack " << target << " at melee, causing " << _rangedAttackDamage << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int damage = amount - _armorDamageReduction;

    if (damage < _hitsPoints)
    {
        std::cout << GREEN << "ALIVE " << _name << RESET << std::endl;
        setHitsPoints(_hitsPoints - damage);
    }
    else
    {
        setHitsPoints(0);
        std::cout << RED << "DEAD" << RESET << std::endl;
    }
    std::cout << YELLOW << "You have " << _hitsPoints << " /" << _maxHitsPoint << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint > amount)
    {
        setEnergyPoint(_energyPoint - amount);
        setHitsPoints(amount + _hitsPoints);
        std::cout << GREEN << "FR4G-TP Be Repaired" << _name << RESET << std::endl;
    }
    else
        std::cout << GREEN << "Can't be repaired" << _name << RESET << std::endl;
    std::cout << YELLOW << "You have " << _energyPoint << " /" << _maxEnergyPoint << RESET << std::endl;
}