// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/20 17:45:15 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 09:44:06 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cmath>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
                                        _amount(initial_deposit),
                                        _nbDeposits(0),
                                        _nbWithdrawals(0)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";" << "closed" << std::endl;
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
    std::cout << s << " ";
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "deposits:" << this->_nbDeposits << ";"
              << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    if (deposit < 0)
        this->makeWithdrawal(abs(deposit));
    this->_nbDeposits++;
    this->_amount += deposit;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount - deposit << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << this->_amount << ";"
              << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal < 0 || withdrawal > this->_amount)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";"
                  << "p_amount:" << this->_amount << ";"
                  << "withdrawal:refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    this->_amount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount + withdrawal << ";"
              << "withdrawal:" << withdrawal << ";"
              << "amount:" << this->_amount << ";"
              << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}
