// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:02 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:36:22 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat	&Cat::operator=(Cat const &right)
{
	type = right.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaow... Seriously ?" << std::endl;
}
