// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/21 13:14:04 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/21 13:41:34 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain	&Brain::operator=(Brain const &right)
{
	for (int i = 0; i < NB_IDEAS; i++)
		this->ideas[i] = right.getIdea(i);
	return (*this);
}

const std::string	&Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void				Brain::setIdea(int i, const std::string &idea)
{
	this->ideas[i] = idea;
}
