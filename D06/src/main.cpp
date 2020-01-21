/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 12:45:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 20:39:44 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
#include "main.hpp"
#include "Scalable.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 0;

    Scalable conversion(argv[1]);
    std::cout << CYAN << "char: ";
    try
    {
        std::cout << GREEN <<  conversion.convertChar() << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
    std::cout << CYAN << "int: ";
    try
    {
        std::cout << GREEN << conversion.convertInt() << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
     std::cout << CYAN << "float: ";
    try
    {
        std::cout << GREEN << std::setprecision(conversion.getPrecision()) << conversion.convertFloat()  << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
    std::cout << CYAN << "double: ";
    try
    {
        std::cout <<  GREEN << std::setprecision(conversion.getPrecision()) << conversion.convertDouble() <<  RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
   
}