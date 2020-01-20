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
            Bureaucrat bureaucrat("YO", 18);
            std::cout << bureaucrat <<  std::endl;
            
    try
    {
        Bureaucrat bureaucrat("TEST", 160);
        //std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &g)
    {
        std::cerr << g.what() << std::endl;
        
        // Traitement specifique a cette erreur
    }

    catch (Bureaucrat::GradeTooLowException &g)
    {
        std::cerr << g.what() << std::endl;
        // Traitement specifique a cette erreur
    }
}