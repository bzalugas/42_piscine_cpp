// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:46:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/25 17:12:13 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class	Cure : public AMateria{
public:
	Cure(void);
	Cure(Cure const &copy);
	~Cure(void);

	Cure	&operator=(Cure const &right);

	virtual AMateria	*clone(void) const;

};

#endif // CURE_H
