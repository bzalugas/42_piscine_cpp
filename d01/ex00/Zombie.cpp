// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:28:54 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 11:38:24 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << _name << " deleted." << std::endl;
}

void	Zombie::annonce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
