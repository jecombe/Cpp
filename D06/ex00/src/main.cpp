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


int main(int argc, const char *argv[])
{
    if (argc < 2)
        return 0;
    
    Scalable conversion(argv[1]);

    std::cout << CYAN << "char: " << RESET;
    try
    {
        std::cout << GREEN <<  conversion.convertChar() << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
    std::cout << CYAN << "int: " << RESET;
    try
    {
        std::cout << GREEN << conversion.convertInt() << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
     std::cout << CYAN << "float: " << RESET;
    try
    {
        std::cout << GREEN << std::setprecision(1)  << std::fixed <<  conversion.convertFloat() << "f" << RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
    std::cout << CYAN << "double: " << RESET;
    try
    {
        std::cout <<  GREEN << std::setprecision(1) << std::fixed << conversion.convertDouble() <<  RESET << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDRED << e.what()  << RESET << '\n';
    }
   
}