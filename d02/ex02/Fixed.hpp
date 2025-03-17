// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:28:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/17 19:58:14 by bazaluga         ###   ########.fr       //
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
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed const	&min(Fixed const &f1, Fixed const &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static Fixed const	&max(Fixed const &f1, Fixed const &f2);

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &f);
	~Fixed(void);
	Fixed	&operator=(Fixed const &f);

	bool	operator<(Fixed const &right) const;
	bool	operator>(Fixed const &right) const;
	bool	operator>=(Fixed const &right) const;
	bool	operator<=(Fixed const &right) const;
	bool	operator==(Fixed const &right) const;
	bool	operator!=(Fixed const &right) const;

	float	operator+(Fixed const &right) const;
	float	operator-(Fixed const &right) const;
	float	operator*(Fixed const &right) const;
	float	operator/(Fixed const &right) const;

	Fixed	&operator++(void); //prefix takes void
	Fixed	operator++(int); //postfix takes int
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	void		seeBits(void) const;
	std::string	getStrBits(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif // FIXED_H
