// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:11:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/21 13:35:28 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal{
public:
	Cat(void);
	Cat(Cat const &copy);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &right);

	virtual void	makeSound(void) const;

private:
	Brain	*_brain;
};

#endif
