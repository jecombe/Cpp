/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:04:04 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 13:07:32 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

void megaphone(const char *string)
{
  std::locale loc;
  std::string str = string;

  for (std::string::size_type i = 0; i < str.length(); ++i)
    std::cout << std::toupper(string[i], loc);

}

int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    for (int i = 1; i < argc; i++)
      megaphone(argv[i]);
    std::cout << std::endl;
  }
  else
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  }
  return 0;
}