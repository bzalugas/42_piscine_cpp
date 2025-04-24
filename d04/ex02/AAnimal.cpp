// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AAnimal.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 09:58:25 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:04:50 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

AAnimal::AAnimal(const std::string &type) : type(type)
{
	std::cout << "Animal parameterized constructor called." << std::endl;
}

AAnimal::~AAnimal(void) { std::cout << "Animal destructor called." << std::endl; }

AAnimal	&AAnimal::operator=(AAnimal const &right)
{
	this->type = right.type;
	return (*this);
}

const std::string	&AAnimal::getType(void) const
{
	return (this->type);
}
