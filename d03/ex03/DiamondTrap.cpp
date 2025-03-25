// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/25 11:24:26 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 14:58:38 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name"), _name("")
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),
													_name(name)
{
	std::cout << "DiamondTrap Constructor called for " << name << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called for " << _name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &right)
{
	this->_name = right._name;
	this->_hitPoints = right._hitPoints;
	this->_energyPoints = right._energyPoints;
	this->_attackDamage = right._attackDamage;
	return *this;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is "
			  << ClapTrap::_name << std::endl;
}

void	DiamondTrap::display(void) const
{
	std::cout << std::endl;
	std::cout << "DiamondTrap's attributes:" << std::endl;
	std::cout << "name: " << _name << std::endl;
	std::cout << "ClapTrap's name: " << ClapTrap::_name << std::endl;
	std::cout << "hit points: " << _hitPoints << std::endl;
	std::cout << "energy points: " << _energyPoints << std::endl;
	std::cout << "attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}
