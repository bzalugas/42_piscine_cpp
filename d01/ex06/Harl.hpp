// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 11:59:50 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 13:49:20 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <map>


class Harl{

public:
	Harl(std::string maxLevel);
	~Harl(void);
	typedef void (Harl::*HarlFct)(void) const;

	void	complain(std::string level);

private:
	static HarlFct		_fctsArray[5];
	static std::string	_levelsArray[5];

	static int	levelHash(std::string& level);

	int	_maxLevel;
	int	_nbComplains;

	void		debug(void) const;
	void		info(void) const;
	void		warning(void) const;
	void		error(void) const;
	void		noLevel(void) const;
};

#endif // HARL_H
