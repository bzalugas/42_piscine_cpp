// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:28:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/14 13:54:42 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed{
private:
	static int const	_nFrac;

	int					_n;

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &f);
	~Fixed(void);
	Fixed	&operator=(Fixed const &f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif // FIXED_H
