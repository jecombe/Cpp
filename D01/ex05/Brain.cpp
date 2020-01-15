/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:48 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:49 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    setAddr();
    return ;

}

Brain::~Brain()
{
    return;
}


void Brain::setAddr()
{
    std::stringstream str;
    str  << this;
    this->addrMemory = str.str();
    return ;
}

std::string Brain::getAddr()
{
    return (this->addrMemory);
}

std::string Brain::identify()
{
    return (this->addrMemory);
}