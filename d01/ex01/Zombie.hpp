// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:28:30 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 11:54:27 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	annonce(void) const;
	void	setName(std::string name);

private:
	std::string	_name;

};

Zombie	*zombieHorde(int n, std::string name);

#endif
