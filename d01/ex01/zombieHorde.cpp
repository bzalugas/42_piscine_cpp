// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   zombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:51:31 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 11:55:30 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return (zombies);
}
