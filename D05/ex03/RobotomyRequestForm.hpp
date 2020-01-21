/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.hpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:36 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:32:06 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"


class RobotomyRequestForm : public Form
{
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm & operator=(RobotomyRequestForm const &);
   virtual void execute(Bureaucrat const &) const;

        
};


#endif