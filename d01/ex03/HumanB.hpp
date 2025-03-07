// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 17:41:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 17:47:19 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon* weapon);
	void	attack(void);

private:
	std::string		_name;
	Weapon*			_weapon;
};

#endif
