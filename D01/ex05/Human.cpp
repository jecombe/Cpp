/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:58 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
    return ;
}

Human::~Human()
{
    return;
}

Brain Human::getBrain()
{
    return (this->brain);
}

std::string Human::identify()
{

    return (this->brain.identify());
}
