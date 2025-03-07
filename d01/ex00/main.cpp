// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:38:46 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 11:44:59 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	std::cout << "Calling randomChump function." << std::endl;
	randomChump("FirstOne");
	std::cout << "Using newZombie function." << std::endl;
	z = newZombie("SecondOne");
	std::cout << "Using annonce method from the main." << std::endl;
	z->annonce();
	delete z;
	return (0);
}
