/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.cpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:33 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:57:21 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "null", 72, 45) {}
RobotomyRequestForm::~RobotomyRequestForm() {}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
    //Form:operator=(c);  

    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
        (void)executor;

}
