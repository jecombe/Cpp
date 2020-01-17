/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main->cpp                                         ->::    ->:/ ->      ->::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student->le-101->fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:01 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:02:04 by jecombe     ###    #+-> /#+    ###->fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    int i = 1;
    FragTrap *robotOne = new FragTrap("TOTO");
    FragTrap *robotTwo = new FragTrap("TITI");
    FragTrap *robotThree = robotTwo;
    
    //Ranged Attack One VS Two
    std::cout << "RANGED ATTACK" << std::endl;
    robotOne->rangedAttack(robotTwo->getName());
    robotTwo->takeDamage(robotOne->getRangedAttackDamage());

    //Melee Attack Two VS One
    std::cout << "MELEE ATTACK" << std::endl;
    robotTwo->meleeAttack(robotOne->getName());
    robotOne->takeDamage(robotTwo->getMeleeAttackDamage());

    //Ramdom Attack
    std::cout << "RANDOM ATTACK" << std::endl;
    //Two VS One
    robotTwo->vaulthunter_dot_exe(robotOne->getName());
    robotOne->takeDamage(robotTwo->getRandomAttackDamage());
    //Three VS One
    robotThree->vaulthunter_dot_exe(robotOne->getName());
    robotOne->takeDamage(robotThree->getRandomAttackDamage());
    while (robotOne->getHitsPoints() != 0)
    {
        robotThree->vaulthunter_dot_exe(robotOne->getName());
        robotOne->takeDamage(robotThree->getRandomAttackDamage());
        i++;
    }
    //Delete allocation memory and set pointer to null pointer
    delete robotOne;
    delete robotTwo;
    robotOne = nullptr;
    robotTwo = nullptr;

    return 0;
}