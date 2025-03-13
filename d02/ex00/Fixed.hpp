// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/13 19:28:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 19:50:13 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H

class Fixed{
private:
	static int const	_nFrac;

	int					_n;

public:
	Fixed(void);
	Fixed(int n);
	Fixed(Fixed const &f);
	Fixed	&operator=(Fixed const &f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif // FIXED_H
