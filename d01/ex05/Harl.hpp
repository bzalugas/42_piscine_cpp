// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 11:59:50 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/13 13:36:53 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <map>


class Harl{

public:
	Harl(void);
	~Harl(void);
	typedef void (Harl::*HarlFct)(void) const;

	void	complain(std::string level) const;

private:
	static HarlFct		_fctsArray[5];
	static std::string	_levelsArray[5];

	static int	levelHash(std::string& level);

	void		debug(void) const;
	void		info(void) const;
	void		warning(void) const;
	void		error(void) const;
	void		noLevel(void) const;
};

#endif // HARL_H
