// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 11:09:16 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 12:12:39 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	for (int i = 0; i < N_SLOTS; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < N_SLOTS; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character::~Character(void)
{
	for (int i = 0; i < N_SLOTS; i++)
		delete _inventory[i];
}

Character	&Character::operator=(Character const &right)
{
	AMateria	*tmp;

	if (this != &right)
	{
		_name = right._name;
		for (int i = 0; i < N_SLOTS; i++)
		{
			tmp = _inventory[i]->clone();
			delete _inventory[i];
			_inventory[i] = tmp;
		}
	}
	return (*this);
}

AMateria					*Character::getMateria(int idx) const
{
	if (idx >= 0 && idx < N_SLOTS)
		return (_inventory[idx]);
	return (NULL);
}


std::string const	&Character::getName(void) const
{
	return (_name);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < N_SLOTS; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < N_SLOTS)
		_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < N_SLOTS && _inventory[idx])
		_inventory[idx]->use(target);
}
