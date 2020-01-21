/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:50 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:33:41 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BURREAUCRAT_H
#define BURREAUCRAT_H

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include <exception>

class Form;

class Bureaucrat
{

   

    public:
        Bureaucrat(const std::string, int);
        Bureaucrat();

        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat & operator=(Bureaucrat const &);

        //methods
        void signForm(Form *);
        void executeForm(Form const &);

        //setter
        void incrementGrade();
        void decrementGrade();
        
        //getter
        const std::string getName() const;
         int getGrade() const;


        //imbrique class
        class GradeTooHighException : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ();

            private:
        };
        class GradeTooLowException : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ();
            
            private:
        };

        //attribut
    private:
        const std::string _name;
        int _grade;

};

//operator ostream
std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif