/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:01 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:44:42 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap robotOne("TOTO");
    FragTrap robotTwo("TITI");
    FragTrap robotThree(robotTwo);

    ScavTrap robotFour("TATA");
    ScavTrap robotFive("TUTU");
    
    //Ranged Attack One VS Two
    robotOne.rangedAttack(robotTwo.getName());
    robotTwo.takeDamage(robotOne.getRangedAttackDamage());

    //Melee Attack Two VS One
    robotTwo.meleeAttack(robotOne.getName());
    robotOne.takeDamage(robotTwo.getMeleeAttackDamage());

    //Ramdom Attack Two VS One
    robotTwo.vaulthunter_dot_exe(robotOne.getName());
    robotOne.takeDamage(robotTwo.getRandomAttackDamage());

    //Random Attack Three VS One
    robotThree.vaulthunter_dot_exe(robotOne.getName());
    robotOne.takeDamage(robotThree.getRandomAttackDamage());

    //Random Challenge
    robotFour.challengeNewcomer(robotFive.getName());

    return 0;
}