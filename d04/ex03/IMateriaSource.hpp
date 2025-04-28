// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMateriaSource.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/28 11:29:23 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 11:31:13 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H
# include "AMateria.hpp"

class	IMateriaSource{
public:
	virtual	~IMateriaSource() {}
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;
};

#endif // IMATERIASOURCE_H
