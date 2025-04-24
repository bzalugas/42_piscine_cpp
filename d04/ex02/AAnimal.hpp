// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AAnimal.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 09:58:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:04:03 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AANIMAL_H
# define AANIMAL_H
# include <string>

class	AAnimal {
public:
	AAnimal(void);
	AAnimal(AAnimal const &copy);
	AAnimal(const std::string &type);
	virtual ~AAnimal(void);

	AAnimal	&operator=(AAnimal const &right);

	const std::string	&getType(void) const;
	virtual void		makeSound(void) const = 0;

protected:
    std::string	type;
};

#endif
