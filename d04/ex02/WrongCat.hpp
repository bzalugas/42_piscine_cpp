// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:31:56 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 19:34:06 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <string>

class	WrongAnimal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal(const std::string &type);
	~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &right);

	const std::string	&getType(void) const;
	void		makeSound(void) const;

protected:
	std::string	type;

};

class	WrongCat : public WrongAnimal{
public:
	WrongCat(void);
	WrongCat(WrongCat const &copy);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &right);
	void		makeSound(void) const;
};

#endif
