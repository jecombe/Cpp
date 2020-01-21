/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:46 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:40:07 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    signForm(Form form, Bureaucrat bureau)
{
    try
    {
        bureau.signForm(form);
      

    }
    catch (std::exception &e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
}

void checkGrade(int sign, int exec)
{
    	try {
		Form fLow("Alice", sign, exec);
	}
	catch (std::exception &e)
	{
		std::cout << BOLDRED <<  e.what() << RESET << std::endl;
	}    
}

int main()
{
	std::cout <<  YELLOW << "* low grade execption" << RESET << std::endl;
    checkGrade(420, 42);
        checkGrade(42, 420);


	std::cout <<  YELLOW << "* high grade execption" << RESET << std::endl;
            checkGrade(0, 101);
            checkGrade(101, 0);


    std::cout << YELLOW << "* sign" << RESET << std::endl;
	Form formTwo("FORME_TWO", 74, 56);
    Form formOne("FORM_ONE", 80, 98);
    
    
    
    try {
            Bureaucrat bureauTwo("BUREAU_TWO", 0);
            Bureaucrat bureauOne("BUREAU_ONE", 85);
            signForm(formOne, bureauOne);
            signForm(formTwo, bureauOne);
            signForm(formOne, bureauTwo);
            signForm(formTwo, bureauTwo);
		}
		catch (std::exception &e)
		{
			std::cout << BOLDRED   << e.what() << RESET << std::endl;
		}


   
}
