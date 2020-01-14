/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:41 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:41 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>

#define GREEN "\033[32m"
#define RESET "\033[0m"
#define RED "\033[31m"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    std::cout << RED << "With String:" << RESET << str << std::endl;
    std::cout << RED << "With Pointer:" << RESET << ptr << std::endl;
    std::cout << RED << "With Reference:" << RESET << ref << std::endl;
    return 0;
}