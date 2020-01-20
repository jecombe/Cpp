/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:26:55 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:39:34 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (_grade > 150)
    {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &p)
{
    *this = p;
}
Bureaucrat::~Bureaucrat() { return; }

//operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    
    //_name = c._name;
    _grade = c._grade;
    return *this;
}
std::ostream &operator<<(std::ostream &o, Bureaucrat const &s)
{
    return (o << s.getName() << " bureaucrat grade " << s.getGrade() << std::endl);
}

//methods
void Bureaucrat::signForm(Form *form)
{
    try
    {
        form->beSigned(*this);
        std::cout << getName() << " signs "  << form->getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << getName() << " cannot signs "  << form->getName() << " because " << e.what() << std::endl;
    }
}


//setter
void Bureaucrat::incrementGrade()
{
    _grade = _grade - 1;
    if (_grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
    _grade = _grade + 1;
    if (_grade > 150)
        throw GradeTooLowException();
}

//getter
const std::string Bureaucrat::getName() const {return _name;}
 int Bureaucrat::getGrade() const {return _grade;}
