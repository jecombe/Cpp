/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:46 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:04:12 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{

        ShrubberyCreationForm sh("TARGET_TEST");
        PresidentialPardonForm pr("TARGET_TEST");
        RobotomyRequestForm ro("TARGET_TEST");

    Bureaucrat bureauOne("BUREAU_ONE", 85);
    Bureaucrat bureauTwo("BUREAU_ONE", 85);
    Bureaucrat bureauThree("BUREAU_ONE", 85);
    
    try
    {
        bureauOne.signForm(&sh);
        bureauOne.signForm(&pr);
        bureauOne.signForm(&ro);
        bureauOne.executeForm(sh);
        bureauOne.executeForm(pr);
        bureauOne.executeForm(ro);
        
      

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}