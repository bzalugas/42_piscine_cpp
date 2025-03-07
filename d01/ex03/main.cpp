// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 17:26:07 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 17:52:50 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob = HumanA("Bob", club);
	HumanB	jim = HumanB("Jim");

	bob.attack();
	jim.attack();

	std::cout << "Give a weapon to jim" << std::endl;
	jim.setWeapon(&club);
	jim.attack();

	std::cout << "Change weapon type" << std::endl;
	club.setType("some other type of club");
	jim.attack();
	bob.attack();
	return (0);
}
