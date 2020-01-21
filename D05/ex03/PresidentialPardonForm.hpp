/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PresidentialPardonForm.hpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:30 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:58:58 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
     public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(PresidentialPardonForm const &);
   virtual void execute(Bureaucrat const &) const;

};

#endif