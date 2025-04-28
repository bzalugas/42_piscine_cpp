// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/28 11:33:10 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 11:52:31 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < N_SLOTS; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy) : IMateriaSource(copy){}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < N_SLOTS; i++)
		delete _memory[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &right)
{
	(void)right;
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < N_SLOTS; i++)
	{
		if (!_memory[i])
		{
			// _memory[i] = m->clone();
			_memory[i] = m;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < N_SLOTS; i++)
		if (_memory[i] && _memory[i]->getType() == type)
			return (_memory[i]->clone());
	return (0);
}
