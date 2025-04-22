// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 18:46:47 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:30:32 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ANIMAL_H
# define ANIMAL_H
# include <string>

class	Animal {
public:
	Animal(void);
	Animal(Animal const &copy);
	Animal(const std::string &type);
	virtual ~Animal(void);

	Animal	&operator=(Animal const &right);

	const std::string	&getType(void) const;
	virtual void		makeSound(void) const;

protected:
    std::string	type;
};

#endif
