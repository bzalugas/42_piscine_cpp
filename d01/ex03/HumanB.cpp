// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 17:40:58 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 17:54:34 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon* weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon)
		std::cout << "Can't attack because no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their "
				  << _weapon->getType() << std::endl;
}
