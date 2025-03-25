// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/19 14:55:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 13:17:09 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10),
						   _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
									   _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called for " << _name << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &right)
{
	this->_name = right._name;
	this->_hitPoints = right._hitPoints;
	this->_energyPoints = right._energyPoints;
	this->_attackDamage = right._attackDamage;
	return *this;
}

std::string	const &ClapTrap::getName(void) const { return _name; }
int			ClapTrap::getHitPoints(void) const { return _hitPoints; }
int			ClapTrap::getEnergyPoints(void) const { return _energyPoints; }
int			ClapTrap::getAttackDamage(void) const { return _attackDamage; }

void		ClapTrap::attack(std::string const &target)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "ClapTrap " << _name << " tried to attack " << target
				  << " but he had no " << (_hitPoints < 1 ? "hit points" : "energy points")
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
				  << " damage but he had no "
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
				  << " points but he had no "
				  << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		_hitPoints += amount;
		_energyPoints--;
	}
}

void	ClapTrap::display(void) const
{
	std::cout << std::endl;
	std::cout << "ClapTrap's attributes:" << std::endl;
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit points: " << _hitPoints << std::endl;
	std::cout << "energy points: " << _energyPoints << std::endl;
	std::cout << "attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}
