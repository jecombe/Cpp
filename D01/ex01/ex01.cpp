/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex01.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:47 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:47 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void memoryLeak()
{
    std::string *panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
    panthere = nullptr;
}