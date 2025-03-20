// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/17 20:09:27 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/20 11:36:56 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point {
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const &point);
	Point	&operator=(Point const &point);
	~Point(void);

	static bool	bsp(Point const a, Point const b, Point const c, Point const point);

	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
};

#endif // POINT_H
