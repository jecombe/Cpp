/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:31 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:31 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::cout << GREEN << "ZombieEvent object constructor " << RESET << std::endl;
    int i = 0;
    nbHorde = n;
    this->zombie = new Zombie[n];
    while (i != n)
    {
        this->zombie[i].setZombieType("HORDE");
        this->zombie[i].setName(randomChump());
        i++;
    }
        //std::cout << GREEN << "ZombieEvent object constructor " << RESET << std::endl;


}

ZombieHorde::ZombieHorde(){return ;}


ZombieHorde::~ZombieHorde()
{
    std::cout << RED << "ZombieEvent object destructor" << RESET << std::endl;
}

std::string ZombieHorde::randomChump()
{

    std::string name;
	static const int nameLen = 15;
	
	static const char* letters[2] = { "bcdfghjklmnpqrstvwxyz", "aeiouy" };
	static const size_t letterLen[2] = { strlen(letters[0]), strlen(letters[1]) };
	srand(time(NULL));
	for (int i=0; i<nameLen; i++)
		name += letters[i%2][rand()%letterLen[i%2]];
	name[0] = toupper(name[0]);
    //this->zombie[nb] = this->newZombie(name);
    std::cout << name << std::endl;
    return name;
}

void ZombieHorde::annouce()
{
    for (int i = 0; i != nbHorde; i+=1)
    {
          std::cout << this->zombie[i].annouce() << std::endl;
    }
}
