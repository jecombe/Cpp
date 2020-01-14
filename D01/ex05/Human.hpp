/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:15:02 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:15:02 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include "Brain.hpp"
//#include "ZombieEvent.hpp"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

class Human
{
    public:
        Human();
        ~Human();
        Brain getBrain(void);
        std::string identify(void);
        void getAddr(void);

    private:
        Brain brain;
};

#endif