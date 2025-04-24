// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:47:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:47:52 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &copy) {}

Cure::~Cure(void) {}

Cure&Cure::operator=(Cure const &right)
{
	return (*this);
}
