/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:34:05 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:31:24 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) : _name(name), _signed(false),  _gradeSign(gradeSign), _gradeExecute(gradeExecute) 
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    else if (_gradeSign < 1|| _gradeExecute > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &p) : _name(p._name), _signed(p._signed), _gradeSign(p._gradeSign), _gradeExecute(p._gradeExecute){}
Form::~Form() { return; }

//operator
Form &Form::operator=(const Form &c)
{
    _signed = c._signed;    
    return *this;
}
std::ostream &operator<<(std::ostream &o, Form const &s)
{
    return (o << s.getName() << " Form grade " << s.getGradeSign());
}

//methods
void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > _gradeSign)
        throw GradeTooLowException();
    _signed = true;

}

//getter
 std::string Form::getName() const{return _name;}
 int Form::getGradeSign() const{return _gradeSign;}
 int Form::getGradeExecute() const{return _gradeExecute;}
bool Form::getSigned() const{return _signed;}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}

