/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:01 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:02:04 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap robotOne("TOTO");
    FragTrap robotTwo("TITI");
    FragTrap robotThree(robotTwo);
    
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

    return 0;
}