// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 19:22:03 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	a("Robert");
	ClapTrap	b("Bernard");
	ScavTrap	s("Scav");
	FragTrap	f("Julia");

	a.attack("Bernard");
	b.takeDamage(9);
	b.beRepaired(9);
	b.attack("Robert");
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Bernard");
	s.attack("Bernard");
	s.guardGate();
	b.takeDamage(s.getAttackDamage());
	s.takeDamage(100);
	s.attack("Robert");
	f.attack(s.getName());
	s.takeDamage(s.getAttackDamage());
	f.highFivesGuys();
	return (0);
}
