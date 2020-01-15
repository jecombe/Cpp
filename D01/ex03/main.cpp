/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:18 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:18 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde zombieHorde = ZombieHorde(5);
    ZombieHorde zombieHordeTwo = ZombieHorde();
    zombieHorde.annouce();
    zombieHordeTwo.annouce();
    return 0;
}