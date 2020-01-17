/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main->cpp                                         ->::    ->:/ ->      ->::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student->le-101->fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:01 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:44:42 by jecombe     ###    #+-> /#+    ###->fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
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

    //Ramdom Attack Two VS One
    std::cout << "RANDOM ATTACK" << std::endl;
    robotTwo->vaulthunter_dot_exe(robotOne->getName());
    robotOne->takeDamage(robotTwo->getRandomAttackDamage());
    // Three VS One
    robotThree->vaulthunter_dot_exe(robotOne->getName());
    robotOne->takeDamage(robotThree->getRandomAttackDamage());
    
    //Delete allocation memory and set pointer to null pointer
    delete robotOne;
    delete robotTwo;
    robotOne = nullptr;
    robotTwo = nullptr;


    //SCAVTRAP
    ScavTrap *robotFour = new ScavTrap("TATA");
    ScavTrap *robotFive = new ScavTrap("TUTU");
    ScavTrap *robotSix = robotFive;

    //Ranged Attack Four VS Five
    std::cout << "RANGED ATTACK" << std::endl;
    robotFour->rangedAttack(robotFive->getName());
    robotFive->takeDamage(robotFour->getRangedAttackDamage());

    //Melee Attack Five VS Four
    std::cout << "MELEE ATTACK" << std::endl;
    robotFive->meleeAttack(robotFour->getName());
    robotFour->takeDamage(robotFive->getMeleeAttackDamage());

     //Random Challenge Four VS Five
    std::cout << "CHALLENGE ATTACK" << std::endl;
    robotFour->challengeNewcomer(robotFive->getName());
    //Random challenge Six VS Four
    robotSix->challengeNewcomer(robotFour->getName());

     //Delete allocation memory and set pointer to null pointer
    delete robotFour;
    delete robotFive;
    robotFour = nullptr;
    robotFive = nullptr;

    return 0;
}