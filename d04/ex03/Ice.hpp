// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 10:39:35 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/25 17:19:18 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class	Ice : public AMateria{
public:
	Ice(void);
	Ice(Ice const &copy);
	~Ice(void);

	Ice	&operator=(Ice const &right);

	virtual AMateria	*clone(void) const;
};

#endif // ICE_H
