/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:26 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:27 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
//#include "ZombieEvent.hpp"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

class Zombie
{
    public:
        Zombie(std::string _name, std::string _type);
        Zombie();
        ~Zombie();
        std::string annouce();
        void setZombieType(std::string _type);
        void setName(std::string _name);


    private:
        std::string name;
        std::string type;

};

#endif