// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/14 13:34:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/19 14:38:55 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"
#include <cstdlib>

/*
 * Fixed::Explanation of calculations
 * Fixed::point = a + w1(b - a) + w2(c - a)
 * Fixed::
 * Fixed::After some math, we found that:
 * Fixed::w1 = a.x * (c.y - a.y) + (point.y - a.y) * (c.x - a.x) - point.x * (c.y - a.y)
 * Fixed::	   / (b.y - a.y) * (c.x - a.x) - (b.x - a.x) * (c.y - a.y)
 * Fixed::
 * Fixed::w2 = point.y - a.y - w1(b.y - a.y) / c.y - a.y
 * Fixed::
 * Fixed::If w1 + w2 < 1 & w1 > 0 & w2 > 0 then point if in triangle
 * Fixed::(subject requires to consider the point as beeing outside the triangle if
 * Fixed::it's on edge or a vertex)
 */

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	s1(c.getY() - a.getY());
	Fixed	s2(point.getY() - a.getY());
	Fixed	s3(c.getX() - a.getX());
	Fixed	s4(b.getY() - a.getY());
	Fixed	s5(b.getX() - a.getX());

	Fixed	w1 = (a.getX() * s1 + s2 * s3 - point.getX() * s1) /
		(s4 * s3 - s5 * s1);
	Fixed	w2 = (s2 - w1 * s4) / s1.toFloat();

	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}

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
	bool inside  = bsp(a, b, c, point);
	std::cout << "The point (" << point.getX() << ", " << point.getY() << ") is "
			  << (inside ? "inside" : "NOT inside") << " the triangle." << std::endl;
	return (0);
}
