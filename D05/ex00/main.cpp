/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:46 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:32:35 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    std::cout << YELLOW << "* operator [<<]" << RESET << std::endl;
    Bureaucrat bureaucratOne("ONE", 18);
    std::cout << bureaucratOne <<  std::endl;

    try
    {
        std::cout << YELLOW << "* too high" << RESET << std::endl;

        Bureaucrat bureaucratTwo("TWO", 0);
        //std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
        // Traitement specifique a cette erreur
    }
    try
    {
        std::cout << YELLOW << "* too low" << RESET << std::endl;

        Bureaucrat bureaucratThree("THREE", 151);
        //std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
        // Traitement specifique a cette erreur
    }

    Bureaucrat bureaucratFour("FOUR", 1);
    try
    {
        std::cout << YELLOW << "* increment" << RESET << std::endl;

        bureaucratFour.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
    }
       Bureaucrat bureaucratFive("HEHEHE", 150);
    try
    {
        std::cout << YELLOW << "* decrement" << RESET << std::endl;

        bureaucratFive.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
    }
}