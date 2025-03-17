// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/17 20:09:27 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/17 20:17:04 by bazaluga         ###   ########.fr       //
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

	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
};

#endif // POINT_H
