/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:52 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:52 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main()
{
  
    ZombieEvent event;

    Zombie *zombieFirst;
    Zombie *zombieSecond;


    event.setZombieType("drunk");
    zombieFirst = event.newZombie("TestName");
    std::cout << zombieFirst->announce() << std::endl;
    delete zombieFirst;
    zombieFirst = nullptr;

    event.setZombieType("Sick");
    zombieSecond = event.randomChump();
    std::cout << zombieSecond->announce() << std::endl;
    delete zombieSecond;
    zombieSecond = nullptr;
}