/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:33:37 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:01:30 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include <exception>

#include "Bureaucrat.hpp"

class Form
{
public:
    Form(const std::string, std::string, const int, const int);
    virtual ~Form();
    Form(const Form &);
    Form &operator=(Form const &);

    //methods
    void beSigned(Bureaucrat &);
    virtual void execute(Bureaucrat const &executor) const;

    //getter
    std::string getName() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    bool getSigned() const;
    std::string getTarget() const;

    //imbrique class
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };
     class NotSignExecption : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    //attribut
private:
    const std::string _name;
    const std::string _target;
    bool _signed;
    const int _gradeSign;
    const int _gradeExecute;
};

//operator ostream
std::ostream &operator<<(std::ostream &, Form const &);

#endif