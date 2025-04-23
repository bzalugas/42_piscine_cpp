// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:56:14 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/23 11:39:43 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(Dog const &right)
{
	if (this != &right)
	{
		type = right.type;
		delete _brain;
		_brain = new Brain(*right._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof woof... Happy ?" << std::endl;
}

Brain			*Dog::getBrain(void) const
{
	return (_brain);
}

void			Dog::setBrain(const Brain &brain)
{
	delete _brain;
	_brain = new Brain(brain);
}
