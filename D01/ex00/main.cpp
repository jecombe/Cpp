/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:33 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:34 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *pony = new Pony("Heap", 10);
    std::cout << GREEN << "Pony Create Heap with name: "  << pony->getName() << "his age: " << pony->getAge() << RESET << std::endl;
    delete pony;
}

void ponyOnTheStack()
{
    Pony pony("Stack", 11);
    std::cout << GREEN << "Pony Create Stack with name: "  << pony.getName() << "his age: " << pony.getAge() << RESET << std::endl;
}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
}