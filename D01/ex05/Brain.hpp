/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:53 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:53 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Brain
{
public:
    Brain();
    ~Brain();
    void setAddr(void);
    std::string getAddr(void);
    std::string identify(void);

private:
    std::string addrMemory;
    //std::stringstream addrMemory;

    
};

#endif