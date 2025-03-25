// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 13:20:40 by bazaluga         ###   ########.fr       //
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

	a.display();
	b.display();
	s.display();
	f.display();
	a.attack(b.getName());
	b.takeDamage(9);
	b.beRepaired(9);
	b.attack(a.getName());
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack(b.getName());
	s.attack(b.getName());
	s.guardGate();
	b.takeDamage(s.getAttackDamage());
	s.takeDamage(100);
	s.attack(a.getName());
	f.attack(s.getName());
	s.takeDamage(s.getAttackDamage());
	f.highFivesGuys();
	a.display();
	b.display();
	s.display();
	f.display();
	return (0);
}
