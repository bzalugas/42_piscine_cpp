// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 19:00:22 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	a("Robert");
	ClapTrap	b("Bernard");
	ScavTrap	s("Scav");

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
	return (0);
}
