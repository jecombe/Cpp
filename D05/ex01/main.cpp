/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:18:46 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:40:07 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    checkForm(Form form, Bureaucrat bureau)
{
    try
    {
        bureau.signForm(&form);
        std::cout << bureau << std::endl;
        std::cout << form << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    Form formOne("FORM_ONE", 80, 98);
    Form formTwo("FORME_TWO", 74, 56);
    Bureaucrat bureauOne("BUREAU_ONE", 85);
    Bureaucrat bureauTwo("BUREAU_TWO", 1);

    checkForm(formOne, bureauTwo);

}