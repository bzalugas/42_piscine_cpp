// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/17 20:09:39 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/17 20:18:04 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y){}

Point::Point(Point const &point) : _x(point.getX()), _y(point.getY()) {}

Fixed const	&Point::getX(void) const { return (_x); }

Fixed const	&Point::getY(void) const { return (_y); }
