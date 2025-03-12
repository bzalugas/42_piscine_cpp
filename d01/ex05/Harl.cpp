// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 12:51:34 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 14:34:50 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"
#include <iterator>

std::map <std::string, Harl::HarlFct> Harl::_fctsMap;

void	Harl::initMap(void)
{
	if (_fctsMap.empty())
	{
		_fctsMap["DEBUG"] = &Harl::debug;
		_fctsMap["INFO"] = &Harl::info;
		_fctsMap["WARNING"] = &Harl::warning;
		_fctsMap["ERROR"] = &Harl::error;
	}
}

Harl::Harl(void)
{
	initMap();
}

Harl::~Harl(void){}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	HarlFct f;

	std::map<std::string, HarlFct>::iterator it = _fctsMap.find(level);
	if (it == _fctsMap.end())
		std::cout << "level of complain <" << level << "> doesn't exists." << std::endl;
	else
	{
		f = it->second;
		(this->*f)();
	}
}
