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
try
{
     Bureaucrat bureauOne("BUREAU_ONE", 1);
        Bureaucrat bureauTwo("BUREAU_TWO", 151);
                   Bureaucrat bureauThree("BUREAU_THREE", 85);



     bureauOne.signForm(&sh);
        bureauOne.signForm(&pr);
        bureauOne.signForm(&ro);
        bureauOne.executeForm(sh);
        bureauOne.executeForm(pr);
        bureauOne.executeForm(ro);

           bureauTwo.signForm(&sh);
        bureauTwo.signForm(&pr);
        bureauTwo.signForm(&ro);
        bureauTwo.executeForm(sh);
        bureauTwo.executeForm(pr);
        bureauTwo.executeForm(ro);


        bureauThree.signForm(&sh);
        bureauThree.signForm(&pr);
        bureauThree.signForm(&ro);
        bureauThree.executeForm(sh);
        bureauThree.executeForm(pr);
        bureauThree.executeForm(ro);

}
catch(std::exception &e)
{
    std::cout << BOLDRED << e.what() << RESET << std::endl;

}

    Bureaucrat high("high", 1);
	Bureaucrat low("low", 150);
	std::cout <<  YELLOW << "* Shrubbery" << RESET << std::endl;

	{
		ShrubberyCreationForm f("lffdfdfolol");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(&f);
		high.signForm(&f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}
	std::cout <<  YELLOW << "* Robotomy" << RESET << std::endl;

	{
		RobotomyRequestForm f("dDDDD");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(&f);
		high.signForm(&f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}
	std::cout <<  YELLOW << "* President pardon" << RESET << std::endl;

	{
		PresidentialPardonForm f("FFFF");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(&f);
		high.signForm(&f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}
}