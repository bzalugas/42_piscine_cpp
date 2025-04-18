// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 13:16:10 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Robert");
	ClapTrap	b("Bernard");

	a.display();
	b.display();
	a.attack(b.getName());
	b.takeDamage(9);
	b.beRepaired(9);
	b.attack(a.getName());
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack(b.getName());
	a.display();
	b.display();
	return (0);
}
