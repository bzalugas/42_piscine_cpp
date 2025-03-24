// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 19:06:52 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 19:11:20 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &right);

	std::string	const &getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;

	void		attack(std::string const &target);
	void		highFivesGuys(void) const;
};

#endif // FRAGTRAP_H
