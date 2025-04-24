// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ICharacter.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:49:32 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 11:18:35 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICHARACTER_H
# define ICHARACTER_H
# include <string>

class	AMateria;

class	ICharacter {
public:
	virtual ~ICharacter(void) {}
	virtual std::string const	&getName(void) const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;
};

#endif // ICHARACTER_H
