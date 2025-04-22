// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/17 20:10:45 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*i = new Dog();
	const Animal		*j = new Cat();
	const WrongAnimal	*k = new WrongCat();
	const Dog			*a = new Dog();
	const Cat			*b = new Cat();
	const WrongCat		*c = new WrongCat();

	std::cout << std::endl;

	std::cout << "The " << meta->getType() << " makes the sound: ";
	meta->makeSound();

	std::cout << "The " << i->getType() << " makes the sound: ";
	i->makeSound();

	std::cout << "The " << j->getType() << " makes the sound: ";
	j->makeSound();

	std::cout << "The " << k->getType() << " makes the sound: ";
	k->makeSound();

	std::cout << "The " << a->getType() << " makes the sound: ";
	a->makeSound();

	std::cout << "The " << b->getType() << " makes the sound: ";
	b->makeSound();

	std::cout << "The " << c->getType() << " makes the sound: ";
	c->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete a;
	delete b;
	delete c;
	return (0);
}
