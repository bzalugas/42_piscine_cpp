// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:28:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/14 11:52:40 by bazaluga         ###   ########.fr       //
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
	Fixed(int n);
	Fixed(Fixed const &f);
	~Fixed(void);
	Fixed	&operator=(Fixed const &f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif // FIXED_H
