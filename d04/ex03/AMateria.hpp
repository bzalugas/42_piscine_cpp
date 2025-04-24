// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:32:23 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 11:43:22 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_H
# define AMATERIA_H
# include <string>
# include "ICharacter.hpp"

class	AMateria {
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &right);

	std::string const	&getType(void) const;

	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);
};

#endif // AMATERIA_H
