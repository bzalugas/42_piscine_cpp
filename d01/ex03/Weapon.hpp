// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 17:27:28 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 17:31:08 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string&	getType(void);
	void			setType(std::string string);

private:
	std::string	_type;

};

#endif
