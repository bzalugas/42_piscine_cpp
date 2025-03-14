// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:52:12 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/14 14:01:04 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int	const Fixed::_nFrac = 8;

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(int const n) : _n(n << 1)
{
	std::cout << "Constructor with int called" << std::endl;
};

Fixed::Fixed(float const f) : _n(f)
{
	std::cout << "Constructor with float called" << std::endl;
};

// Fixed::Fixed(Fixed const &f) : _n(f.getRawBits())
Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

Fixed	&Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_n = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}

int		Fixed::toInt(void) const
{
	return (_n >> 1);
}
