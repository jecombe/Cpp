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
#include "Intern.hpp"

int main()
{

     
        Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;
    Intern i1;
    Bureaucrat b1 = Bureaucrat("TEST_BUREAUCRATE", 42);

    f1 = i1.makeForm("robotomy request", "Marvin");
    f2 = i1.makeForm("presidential pardon", "Marvin");
    f3 = i1.makeForm("shrubbery creation", "Marvin");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;

    b1.signForm(*f1);
    b1.executeForm(*f1);

    f4 = i1.makeForm("TEST_FORM", "Marvin");
}