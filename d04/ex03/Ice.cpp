// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:40:27 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:40:54 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &copy) {}

Ice::~Ice(void) {}

Ice&Ice::operator=(Ice const &right)
{
	return (*this);
}
