// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:33:32 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 11:11:26 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
}

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(AMateria const &right)
{
	this->_type = right._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

void		AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
