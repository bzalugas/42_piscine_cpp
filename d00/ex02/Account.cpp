// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/20 17:45:15 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/20 17:50:27 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"

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

void    Account::displayAccountsInfos(void)
{

}
