// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/14 13:34:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/20 11:36:25 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"
#include <cstdlib>

int		main(int argc, char *argv[])
{
	if (argc < 9 || argc > 9)
	{
		std::cerr << "Usage: ./main ax ay bx by cx cy px py" << std::endl;
		return (1);
	}

	Point	a((float)std::atof(argv[1]), (float)std::atof(argv[2]));
	Point	b((float)std::atof(argv[3]), (float)std::atof(argv[4]));
	Point	c((float)std::atof(argv[5]), (float)std::atof(argv[6]));
	Point	point((float)std::atof(argv[7]), (float)std::atof(argv[8]));
	bool inside  = Point::bsp(a, b, c, point);
	std::cout << "The point (" << point.getX() << ", " << point.getY() << ") is "
			  << (inside ? "inside" : "NOT inside") << " the triangle." << std::endl;
	return (0);
}
