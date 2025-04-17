// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:11:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:30:37 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class	Cat : public Animal{
public:
	Cat(void);
	Cat(Cat const &copy);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &right);

	virtual void	makeSound(void) const;
};

#endif
