// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/25 11:13:59 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/25 20:16:43 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap(void);

	DiamondTrap	&operator=(DiamondTrap const &right);

	void		attack(std::string const &target);
	void		whoAmI(void) const;
	void		display(void) const;

private:
	std::string	_name;
};

#endif // DIAMONDTRAP_H
