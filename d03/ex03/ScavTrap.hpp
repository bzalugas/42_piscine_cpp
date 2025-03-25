// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/24 17:08:21 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 20:30:45 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &right);

	std::string	const &getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;

	void		attack(std::string const &target);
	void		guardGate(void) const;

protected:
	int	_defaultHitPoints;
	int	_defaultEnergyPoints;
	int	_defaultAttackDamage;
};

#endif // SCAVTRAP_H
