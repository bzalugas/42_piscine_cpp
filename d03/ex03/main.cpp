// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 20:23:16 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap	a("Robert");
	ClapTrap	b("Bernard");
	ScavTrap	s("Scav");
	FragTrap	f("Julia");
	DiamondTrap	d("Patrick");

	a.display();
	b.display();
	s.display();
	f.display();
	d.display();
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
	d.whoAmI();
	d.attack(f.getName());
	a.display();
	b.display();
	s.display();
	f.display();
	d.display();
	return (0);
}
