/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:33:37 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:01:15 by jecombe     ###    #+. /#+    ###.fr     */
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
        Form(const std::string, const int, const int);
        ~Form();
        Form(const Form &);
        Form & operator=(Form const &);
        
        //methods
        void beSigned(Bureaucrat &);
        //getter
         std::string getName() const;
         int getGradeSign() const;
         int getGradeExecute() const;
        bool getSigned() const;


        //imbrique class
        class GradeTooHighException : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ()
             {
                 return "Grade Too HighException";
             }
        };
        class GradeTooLowException : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ()
             {
                 return "Grade Too LowException";
             }
        };

        //attribut
    private:
        const std::string _name;
        bool _signed;
        const int _gradeSign;
        const int _gradeExecute;

};

//operator ostream
std::ostream &operator<<(std::ostream &, Form const &);

#endif