/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:12 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:13 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define RED     "\033[31m"


class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string _type);
        Zombie *newZombie(std::string _name);
        Zombie *randomChump();

    private:
    std::string type;

};

#endif