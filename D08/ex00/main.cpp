/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 18:12:59 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 18:12:59 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "easyfind.hpp"
#include <list>
#include <iostream>
#include "easyfind.hpp"
int main()
{
    std::list<int> ilist;
    ilist.push_back(1);
    ilist.push_back(2);
    ilist.push_back(3);
    try
    {
      easyfind(ilist, 6);
    }
    catch(const std::exception &e)
    {
       std::cerr << BOLDRED << e.what()  << RESET << '\n';

    }
    
}