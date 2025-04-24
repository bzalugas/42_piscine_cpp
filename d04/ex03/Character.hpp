// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:51:55 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 11:39:29 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter{
public:
	static const int	N_SLOTS;

	Character(void);
	Character(const std::string &name);
	Character(Character const &copy);
	~Character(void);

	Character	&operator=(Character const &right);

private:
	std::string	_name;
	AMateria	*_inventory[4];
};

#endif // CHARACTER_H
