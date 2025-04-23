// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:34:20 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:59:11 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongCat.hpp"
#include <iostream>

/**************************** WRONGANIMAL *************************************/

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "WrongAnimal parameterized constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &right)
{
	this->type = right.type;
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const
{
	return (type);
}

void				WrongAnimal::makeSound(void) const
{
	std::cout << "I'm a WrongAnimal..." << std::endl;
}


/********************************* WRONGCAT ***********************************/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat parameterized constructor called." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &right)
{
	this->type = right.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaaoaoooooowwwwww..." << std::endl;
}
