/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:50 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:27:34 by jecombe     ###    #+. /#+    ###.fr     */
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
//Color 
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
class Bureaucrat
{

   

    public:
        Bureaucrat(const std::string,  int);
        Bureaucrat();

        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat & operator=(Bureaucrat const &);

        //setter
        void incrementGrade();
        void decrementGrade();
        void setGrade(int);
        
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