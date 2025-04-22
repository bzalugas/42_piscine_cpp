// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:55:04 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:30:43 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class	Dog : public Animal {
public:
	Dog(void);
	Dog(Dog const &copy);
	virtual ~Dog(void);

	Dog	&operator=(Dog const &right);

	virtual void	makeSound(void) const;
};

#endif
