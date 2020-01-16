#ifndef NINJA_TRAP_H
#define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
     //Constructor / Destructor
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &f);
    ~NinjaTrap();
    void ninjaShoebox(NinjaTrap &n);
    void ninjaShoebox(FragTrap &f);
    void ninjaShoebox(ScavTrap &s);
    void ninjaShoebox(ClapTrap &c);

    private:

};
#endif