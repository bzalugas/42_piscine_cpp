// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 12:51:34 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 13:36:47 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"
#include <iterator>

Harl::HarlFct	Harl::_fctsArray[5] = {&Harl::noLevel, &Harl::debug, &Harl::info,
	&Harl::warning, &Harl::error};

std::string		Harl::_levelsArray[5] = {"", "DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug(void) const
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\
I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the \
manager now." << std::endl;
}

void	Harl::noLevel(void) const
{
	std::cout << "Bad level of complain." << std::endl;
}

int		Harl::levelHash(std::string& level)
{
	int	i;

	for (i = 1; i < 5; i++)
		if (!_levelsArray[i].compare(level))
			return (i);
	return (0);
}

void	Harl::complain(std::string level) const
{
	HarlFct f;

	f = _fctsArray[levelHash(level)];
	(this->*f)();
}
