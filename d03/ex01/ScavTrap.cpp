// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 17:16:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 13:09:11 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called for " << name << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called for " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &right)
{
	this->_name = right._name;
	this->_hitPoints = right._hitPoints;
	this->_energyPoints = right._energyPoints;
	this->_attackDamage = right._attackDamage;
	return *this;
}

std::string	const &ScavTrap::getName(void) const { return _name; }
int			ScavTrap::getHitPoints(void) const { return _hitPoints; }
int			ScavTrap::getEnergyPoints(void) const { return _energyPoints; }
int			ScavTrap::getAttackDamage(void) const { return _attackDamage; }

void		ScavTrap::attack(std::string const &target)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "ScavTrap " << _name << " tried to attack " << target
				  << " but he had no " << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
				  << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void		ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
