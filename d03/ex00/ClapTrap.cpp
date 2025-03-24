// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/19 14:55:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 17:03:07 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10),
						   _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
									   _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "ClapTrap Constructor called." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &right)
{
	this->_name = right._name;
	this->_hitPoints = right._hitPoints;
	this->_energyPoints = right._energyPoints;
	this->_attackDamage = right._attackDamage;
	return *this;
}

std::string	&ClapTrap::getName(void) { return _name; }
int			ClapTrap::getHitPoints(void) { return _hitPoints; }
int			ClapTrap::getEnergyPoints(void) { return _energyPoints; }
int			ClapTrap::getAttackDamage(void) { return _attackDamage; }

void		ClapTrap::setName(std::string &name) { _name = name; }
void		ClapTrap::setHitPoints(int value) { _hitPoints = value; }
void		ClapTrap::setEnergyPoints(int value) { _energyPoints = value; }
void		ClapTrap::setAttackDamage(int value) { _attackDamage = value; }

void		ClapTrap::attack(std::string const &target)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "ClapTrap " << _name << " tried to attack " << target
				  << " but he has no " << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
				  << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "ClapTrap " << _name << " tried to take " << amount
				  << " damage but he has no "
				  << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " of damage." << std::endl;
		_hitPoints -= amount;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "ClapTrap " << _name << " tried to repair itself by " << amount
				  << " points but he has no "
				  << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		_hitPoints += amount;
		_energyPoints--;
	}
}
