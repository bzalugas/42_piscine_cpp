// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 11:59:50 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 14:26:55 by bazaluga         ###   ########.fr       //
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
	static std::map <std::string, HarlFct> _fctsMap;

	static void	initMap(void);

	void		debug(void) const;
	void		info(void) const;
	void		warning(void) const;
	void		error(void) const;
};

#endif // HARL_H
