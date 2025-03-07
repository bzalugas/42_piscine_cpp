// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/20 17:45:15 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/05 11:13:24 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
};

int     Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int     Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int     Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
    std::time_t	timestamp;
    struct tm		date;
    char			s[18];

    std::time(&timestamp);
    date = *localtime(&timestamp);
	std::strftime(s, 18, "[%Y%m%d_%H%M%S]", &date);
    std::cout << s << std::endl;
}

void    Account::displayStatus(void) const
{
    this->_displayTimestamp();
}

// void    Account::displayAccountsInfos(void)
// {

// }
