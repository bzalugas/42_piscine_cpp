// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/28 11:31:51 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 11:38:29 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource{
public:
	static const int	N_SLOTS = 4;

	MateriaSource(void);
	MateriaSource(MateriaSource const &copy);
	~MateriaSource(void);

	MateriaSource	&operator=(MateriaSource const &right);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const & type);

private:
	AMateria	*_memory[N_SLOTS];
};

#endif // MATERIASOURCE_H
