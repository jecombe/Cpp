/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:42 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:43 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

class Pony
{
    public:
        Pony(std::string name, int age);
        ~Pony();
        void setName(std::string name);
        void setAge(int age);
        std::string getName();
        int getAge();

    private:
        std::string name;
        int age;

};

#endif