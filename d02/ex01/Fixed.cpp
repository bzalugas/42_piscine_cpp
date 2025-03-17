// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:52:12 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/17 18:48:58 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <cmath>
#include <string>

int	const Fixed::_nFrac = 8;

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(int const n) : _n(n << _nFrac)
{
	std::cout << "Constructor with int called for " << n << std::endl;
};

Fixed::Fixed(float const f)
{
	std::cout << "Constructor with float called for " << f << std::endl;
	_n = roundf(f * (0x1 << _nFrac));
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
	return (_n >> _nFrac);
}

float	Fixed::toFloat(void) const
{
	return ((float)_n / (0x1 << _nFrac));
}

void		Fixed::seeBits(void) const
{
	int	size = sizeof(_n) * 8;

	for (int i = size - 1; i >= 0; i--)
	{
		if (i != size - 1 && (i + 1) % 4 == 0)
			std::cout << " ";
		std::cout << (0x1 & (_n >> i));
	}
	std::cout << std::endl;
}

std::string	Fixed::getStrBits(void) const
{
	std::string	s;
	int	size = sizeof(_n) * 8;

	for (int i = size - 1; i >= 0; i--)
	{
		if (i != size - 1 && (i + 1) % 4 == 0)
			s += " ";
		s += (0x1 & (_n >> i)) + '0';
	}
	return (s);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
