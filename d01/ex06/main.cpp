// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 14:01:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 15:05:03 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		std::cout << "./harlFilter <max level>" << std::endl;
		return (1);
	}
	Harl	h(argv[1]);

	if (h.getMaxLevel() == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		h.complain("DEBUG");
		h.complain("INFO");
		h.complain("WARNING");
		h.complain("ERROR");
	}
	return 0;
}
