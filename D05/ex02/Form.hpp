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

#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */
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