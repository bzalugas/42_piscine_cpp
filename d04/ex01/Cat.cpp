// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:02 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/21 13:41:55 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(Cat const &right)
{
	type = right.type;
	this->_brain = right._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaow... Seriously ?" << std::endl;
}
