// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 19:07:37 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 13:09:56 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor called for " << name << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called for " << _name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &right)
{
	this->_name = right._name;
	this->_hitPoints = right._hitPoints;
	this->_energyPoints = right._energyPoints;
	this->_attackDamage = right._attackDamage;
	return *this;
}

std::string	const &FragTrap::getName(void) const { return _name; }
int			FragTrap::getHitPoints(void) const { return _hitPoints; }
int			FragTrap::getEnergyPoints(void) const { return _energyPoints; }
int			FragTrap::getAttackDamage(void) const { return _attackDamage; }

void		FragTrap::attack(std::string const &target)
{
	if (_hitPoints < 1 || _energyPoints < 1)
		std::cout << "FragTrap " << _name << " tried to attack " << target
				  << " but he had no " << (_hitPoints < 1 ? "hit points" : "energy points")
				  << " left." << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
				  << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << ": Please, high five me." << std::endl;
}
