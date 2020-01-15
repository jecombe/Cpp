/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:34 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:34 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"

//#include "ZombieEvent.hpp"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define RED     "\033[31m"


class ZombieHorde
{
    public:
        ZombieHorde(int n);
        ZombieHorde();
        ~ZombieHorde();
        std::string randomChump();
        void annouce();
        Zombie newZombie(std::string _name);
    private:
    Zombie *zombie;
    int nbHorde;

};

#endif