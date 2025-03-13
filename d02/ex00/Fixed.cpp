// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:52:12 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 19:54:48 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int	const Fixed::_nFrac = 8;

Fixed::Fixed(void) : _n(0){};

Fixed::Fixed(int n) : _n(n){};

Fixed::Fixed(Fixed const &f) : _n(f.getRawBits()){};

Fixed::~Fixed(){};
