// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:55:04 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:05:17 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DOG_H
# define DOG_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal {
public:
	Dog(void);
	Dog(Dog const &copy);
	virtual ~Dog(void);

	Dog	&operator=(Dog const &right);

	virtual void	makeSound(void) const;
	Brain			*getBrain(void) const;
	void			setBrain(const Brain &brain);

private:
	Brain	*_brain;
};

#endif
