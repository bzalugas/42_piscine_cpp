// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 14:01:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 13:43:42 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}
	Harl		h(argv[1]);

	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("test");
	h.complain("INFO");
	h.complain("INFO");
	h.complain("test");
	h.complain("WARNING");
	h.complain("WARNING");
	h.complain("WARNING");
	h.complain("test");
	h.complain("ERROR");
	h.complain("ERROR");
	h.complain("test");
	h.complain("ERROR");
	h.complain("ERROR");

	return 0;
}
