/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberyCreationForm.hpp                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:41 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:32:11 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
    
    virtual void execute(Bureaucrat const &) const;

        
};

#endif