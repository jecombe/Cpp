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

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
    _grade = grade;
}
Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &p){*this = p;}
Bureaucrat::~Bureaucrat() { return; }

//operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    _grade = c._grade;

    return *this;
}
std::ostream &operator<<(std::ostream &o, Bureaucrat const &s)
{
    return (o << s.getName() << " bureaucrat grade " << s.getGrade());
}

//methods
void Bureaucrat::signForm(Form &form)
{


    	if (form.getSigned())
	{
		std::cout << BOLDRED << this->_name << " cannot sign " <<" because it is already signed."  << RESET << std::endl;
		return;
	}
	try {
		form.beSigned(*this);
		std::cout << BOLDGREEN << this->_name << " signs " << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << BOLDRED << this->_name << " cannot sign "
	<< " because the grade was too low." << RESET << std::endl;
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

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}
