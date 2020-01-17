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
    NinjaTrap &	operator=(const NinjaTrap &rhs);

    ~NinjaTrap();
    void ninjaShoebox(NinjaTrap &n);
    void ninjaShoebox(FragTrap &f);
    void ninjaShoebox(ScavTrap &s);
    void ninjaShoebox(ClapTrap &c);

    private:

};
/*
#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(const std::string name);
		NinjaTrap(const NinjaTrap &obj);
		~NinjaTrap(void);

		NinjaTrap &	operator=(const NinjaTrap &rhs);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			ninjaShoebox(NinjaTrap & target);
		void			ninjaShoebox(ClapTrap & target);
		void			ninjaShoebox(FragTrap & target);
		void			ninjaShoebox(ScavTrap & target);

	private:
		static std::string _vaulthunterQuotes[25];
};

#endif // NINJATRAP_CLASS_H
*/
#endif