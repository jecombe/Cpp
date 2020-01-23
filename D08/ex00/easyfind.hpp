/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   easyfind.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 18:13:16 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 18:13:16 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <stdexcept>
#include <iostream>
#include <exception>
#include <vector>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

struct MyException : public std::exception {
   const char * what () const throw () {
      return "Does not exist";
   }
};

template<typename T> 
void easyfind (T ilist, int x)
{

      std::list<int>::iterator findIter = std::find(ilist.begin(), ilist.end(), x);
    if (ilist.end() == findIter)
       throw MyException();
    else
    {
        std::cout << BOLDGREEN << "Found !" << std::endl;
    }
    
       
}
#endif