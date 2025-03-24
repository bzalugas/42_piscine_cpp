// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 16:50:09 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 16:55:51 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Robert");
	ClapTrap	b("Bernard");

	a.attack("Bernard");
	b.takeDamage(9);
	b.beRepaired(9);
	b.attack("Robert");
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Bernard");
	return (0);
}
