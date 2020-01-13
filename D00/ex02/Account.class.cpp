/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Account.class.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: Invalid date        by ***********  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 21:10:14 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <string.h>
#include <sstream>


int Account::getNbAccounts()
{
    return 0;
}

int Account::getTotalAmount()
{
    return 0;
}
int Account::getNbDeposits()
{
    return 0;
}
int Account::getNbWithdrawals()
{
    return 0;
}
void Account::displayAccountsInfos()
{
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << "total:" << Account::_nbAccounts;
    std::cout << "deposits:" << Account::_nbAccounts;
    std::cout << "withdrawals:" << Account::_nbAccounts;


}

Account::Account(int initial_deposit) {}
Account::~Account(void) {}
void Account::makeDeposit(int deposit) {};
bool Account::makeWithdrawal(int withdrawal) {return 0;}
int Account::checkAmount(void) const {return 0;}
void Account::displayStatus(void) const {}
void Account::_displayTimestamp(void) {}
Account::Account(void) {}