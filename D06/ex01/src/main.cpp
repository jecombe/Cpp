/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 12:45:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 19:03:57 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

std::string randomString()
{
    std::string retour = "";
    static const std::string charList = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::stringstream concat;
    for (int i = 0; i < 8; i++)
    {
        concat << charList[rand() % charList.size()];
    }
    return concat.str();
}

void *serialize()
{
    Data *data = new Data;
    
    srand(time(nullptr));
    data->s1 = randomString();
    data->n = rand() % RAND_MAX;
    data->s2 = randomString();
    return data;
}

Data *deserialize(void *raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    void *serial = serialize();
    std::cout << BOLDGREEN << "Address on heap void* : " << serial << RESET << std::endl;
    Data *d = deserialize(serial);
    std::cout << BOLDYELLOW << "*=======* DESERIALIZE *=======*"  << RESET << std::endl;
    std::cout << CYAN << "Random Alphanumeric string number 1: " << d->s1 << RESET << std::endl;
    std::cout << MAGENTA << "Random num: " << d->n << RESET << std::endl;
    std::cout << CYAN << "Random Alphanumeric string number 2: " << d->s2 << RESET << std::endl;
}
