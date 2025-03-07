// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 17:34:21 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 17:47:29 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack(void);

private:
	std::string		_name;
	Weapon&			_weapon;
};

#endif
