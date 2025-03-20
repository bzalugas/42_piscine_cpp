// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   bsp.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/20 11:23:42 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/20 15:05:09 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

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

bool	Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	s1(c.getY() - a.getY());
	Fixed	s2(point.getY() - a.getY());
	Fixed	s3(c.getX() - a.getX());
	Fixed	s4(b.getY() - a.getY());
	Fixed	s5(b.getX() - a.getX());

	float	w1 = (a.getX() * s1 + s2 * s3 - point.getX() * s1) /
		(s4 * s3 - s5 * s1);
	float	w2 = (s2 - w1 * s4.toFloat()) / s1.toFloat();

	// std::cout << "w1 = " << w1 << ", w2 = " << w2 << std::endl;
	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}
