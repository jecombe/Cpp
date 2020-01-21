/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberyCreationForm.cpp                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 17:41:38 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:57:28 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {}
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "null", 145, 137) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
    //Form:operator=(c);
    (void)s;
    return *this;
}
/*
          
         
            
           @@ Christmas Trees @@ 11/96
            \ /
          -->*<--
            /_\
           /_\_\
          /_/_/_\
          /_\_\_\
         /_/_/_/_\
         /_\_\_\_\
        /_/_/_/_/_\
        /_\_\_\_\_\
       /_/_/_/_/_/_\
       /_\_\_\_\_\_\
      /_/_/_/_/_/_/_\
  jgs      [___]

        
        
       
       
      
  jgs      
*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    (void)executor;
    std::ofstream outfile (getTarget() + "_shrubbery");
    outfile << "        \\ /" << std::endl;
    outfile << "       -->*<--" << std::endl;
    outfile << "        /_\\" << std::endl;
    outfile << "       /_\\_\\" << std::endl;
    outfile << "      /_/_/_\\" << std::endl;
    outfile << "       /_\\_\\_\\" << std::endl;
    outfile << "      /_/_/_/_\\" << std::endl;
    outfile << "       /_\\_\\_\\_\\" << std::endl;
    outfile << "      /_/_/_/_/_\\" << std::endl;
    outfile << "      /_\\_\\_\\_\\_\\" << std::endl;
    outfile << "     /_/_/_/_/_/_\\" << std::endl;
    outfile << "      /_\\_\\_\\_\\_\\_\\" << std::endl;
    outfile << "     /_/_/_/_/_/_/_\\" << std::endl;
    outfile << "          [___]" << std::endl;
    outfile.close();
    
}
