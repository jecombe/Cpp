/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PresidentialPardonForm.cpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:26 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:46:21 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "null", 25, 5) {}
PresidentialPardonForm::~PresidentialPardonForm() {}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
    //Form:operator=(c);  

    return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
        (void)executor;

}
