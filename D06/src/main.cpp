/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 12:45:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 20:21:44 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <string.h>

#include "main.hpp"
#include "Scalable.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 0;

        Scalable conversion(argv[1]);
        try
        {
            std::cout << conversion.convertChar() << std::endl;
              
        
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
     

}