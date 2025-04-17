// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:56:14 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:35:57 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog	&Dog::operator=(Dog const &right)
{
	type = right.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof woof... Happy ?" << std::endl;
}
