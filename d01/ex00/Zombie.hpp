// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 11:28:30 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 11:40:45 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);
	void	annonce(void) const;

private:
	std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
