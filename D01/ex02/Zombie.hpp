/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:04 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:04 by jecombe     ###    #+. /#+    ###.fr     */
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
        ~Zombie();
        std::string announce();

    private:
        std::string name;
        std::string type;

};

#endif