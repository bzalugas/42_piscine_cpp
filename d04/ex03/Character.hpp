// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:51:55 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 12:13:32 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter{
public:
	static const int	N_SLOTS = 4;

	Character(void);
	Character(const std::string &name);
	Character(Character const &copy);
	~Character(void);

	Character	&operator=(Character const &right);
	virtual AMateria					*getMateria(int idx) const;

	virtual std::string const	&getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);

private:
	std::string	_name;
	AMateria	*_inventory[N_SLOTS];
};

#endif // CHARACTER_H
