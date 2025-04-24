// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:02 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:04:07 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &copy) : AAnimal(copy), _brain(new Brain(*copy._brain))
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
	if (this != &right)
	{
		type = right.type;
		delete _brain;
		_brain = new Brain(*right._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaow... Seriously ?" << std::endl;
}

Brain			*Cat::getBrain(void) const
{
	return (_brain);
}

void			Cat::setBrain(const Brain &brain)
{
	delete _brain;
	_brain = new Brain(brain);
}
