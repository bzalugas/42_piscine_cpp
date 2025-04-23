// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:49:40 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/23 11:00:14 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal parameterized constructor called." << std::endl;
}

Animal::~Animal(void) { std::cout << "Animal destructor called." << std::endl; }

Animal	&Animal::operator=(Animal const &right)
{
	this->type = right.type;
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}

void				Animal::makeSound(void) const
{
	std::cout << "If an Animal says it can talk, then that's a liar..." << std::endl;
}
