// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/14 13:34:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/20 11:52:56 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

void	myTests(void)
{
	Fixed		a(1234.4321f);
	Fixed		b(10.45f);

	std::cout << "a is " << a << std::endl;
	std::cout << "Raw bits of a: " << a.getStrBits() << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "Raw bits of b: " << b.getStrBits() << std::endl;

	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "Change b to 1234.32" << std::endl;
	b = Fixed(1234.32f);
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "Change b to 10.45" << std::endl;
	b = Fixed(10.45f);
	// std::cout << "b=" << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	std::cout << "doing b++. inline: " << b++ << " after: " << b << std::endl;
	--b;
	std::cout << "doing ++b. inline: " << ++b << " after: " << b << std::endl;
	--b;
	std::cout << "doing b--. inline: " << b-- << " after: " << b << std::endl;
	++b;
	std::cout << "doing --b. inline: " << --b << " after: " << b << std::endl;
	++b;

	std::cout << "max(" << a << "," << b << ") = " << Fixed::max(a,b) << std::endl;
	std::cout << "min(" << a << "," << b << ") = " << Fixed::min(a,b) << std::endl;
}

void	subjectTests(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
}

int		main(void)
{
	std::cout << "----- My tests -----" << std::endl;
	myTests();
	std::cout << std::endl << "----- Subject tests -----" << std::endl;
	subjectTests();
	return (0);
}
