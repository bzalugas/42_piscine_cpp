// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 11:09:16 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 11:56:47 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(void) : _name("Default") {}

Character::Character(const std::string &name) : _name(name) {}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character::~Character(void) {}

Character	&Character::operator=(Character const &right)
{
	_name = right._name;
	for (int i = 0; i < Character::N_SLOTS; i++)
	{
		delete _inventory[i];
		_inventory[i] = new AMateria(right._inventory[i]);
	}

	return (*this);
}
