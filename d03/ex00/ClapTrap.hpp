// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/19 14:53:21 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/24 17:02:18 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>

class ClapTrap {
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &c);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &right);

	std::string	&getName(void);
	int			getHitPoints(void);
	int			getEnergyPoints(void);
	int			getAttackDamage(void);

	void		setName(std::string &name);
	void		setHitPoints(int value);
	void		setEnergyPoints(int value);
	void		setAttackDamage(int value);

	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_H
