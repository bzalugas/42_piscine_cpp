// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:38:46 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 12:01:09 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;
	int		n;
	int		i;

	n = 42;
	std::cout << "Creating a horde of "<< n << " zombies." << std::endl;
	z = zombieHorde(n, "Mike");
	std::cout << "Using annonce function of each zombie." << std::endl;
	for (i = 0; i < n; i++)
		z->annonce();
	delete [] z;
	return (0);
}
