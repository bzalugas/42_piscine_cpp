// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/14 13:34:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/17 18:46:23 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "Raw bits of a: " << a.getStrBits() << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "Raw bits of b: " << b.getStrBits() << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "Raw bits of c: " << c.getStrBits() << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "Raw bits of d: " << d.getStrBits() << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}
