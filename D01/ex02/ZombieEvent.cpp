/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:08 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:09 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "ZombieEvent.hpp"
#include "Zombie.hpp"


ZombieEvent::ZombieEvent()
{
    //std::cout << GREEN << "ZombieEvent object constructor " << RESET << std::endl;
}

ZombieEvent::~ZombieEvent()
{
   // std::cout << RED << "ZombieEvent object destructor" << RESET << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string _name)
{
    return (new Zombie(_name, type));
}

void ZombieEvent::setZombieType(std::string _type)
{
    type = _type;
}

Zombie *ZombieEvent::randomChump()
{

      
    Zombie *zombie;

    std::string name;
	static int nameLen = 15;
	
    const char* letters[2] = { "bcdfghjklmnpqrstvwxyz", "aeiouy" };
     size_t letterLen[2] = { strlen(letters[0]), strlen(letters[1]) };
    srand(time(NULL));
	for (int i=0; i<nameLen; i++)
		name += letters[i%2][rand()%letterLen[i%2]];
	name[0] = toupper(name[0]);
    zombie = this->newZombie(name);

    return zombie;
}
