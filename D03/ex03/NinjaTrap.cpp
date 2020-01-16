/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 20:21:24 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:31:56 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
}

NinjaTrap::NinjaTrap(const NinjaTrap &f) : ClapTrap(f)
{
}

NinjaTrap::~NinjaTrap()
{
}

void NinjaTrap::ninjaShoebox(NinjaTrap &n)
{
    std::cout << BLUE << "NINJA Ninja" << n.getName() << RESET << std::endl;


}
void NinjaTrap::ninjaShoebox(FragTrap &f)
{
    std::cout << BLUE << "NINJA FragTrap" << f.getName() << RESET << std::endl;

}
void NinjaTrap::ninjaShoebox(ScavTrap &s)
{
    std::cout << BLUE << "NINJA ScavTrap" << s.getName() << RESET << std::endl;

}
void NinjaTrap::ninjaShoebox(ClapTrap &c)
{
        std::cout << BLUE << "NINJA ClapTrap" << c.getName() << RESET << std::endl;


}