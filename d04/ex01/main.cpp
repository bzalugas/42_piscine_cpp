// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/23 11:55:37 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>
#define ANIMALS 4

int	main(void)
{
	Animal	*array[ANIMALS];

	std::cout << "******** Array assignation ********" << std::endl;
	for (int i = 0; i < ANIMALS / 2; i++)
		array[i] = new Dog();
	for (int i = ANIMALS / 2; i < ANIMALS; i++)
		array[i] = new Cat();
	std::cout << "\n" << std::endl;

	std::cout << "******** Test of copies *********" << std::endl;
	std::cout << "Setting some ideas in first dog" << std::endl;
	Dog	*dog1 = (Dog *)array[0];
	for (int i = 0; i < Brain::NB_IDEAS / 4; i++)
		dog1->getBrain()->setIdea(i, "My name is Rantamplan");
	for (int i = Brain::NB_IDEAS / 4; i < Brain::NB_IDEAS / 2; i++)
		dog1->getBrain()->setIdea(i, "My master is Luke");
	std::cout << "Checking ideas of first dog :" << std::endl;
	dog1->getBrain()->showIdeas();

	std::cout << "\nSetting dog2 = dog1" << std::endl;
	Dog *dog2 = (Dog *)array[1];
	*dog2 = *dog1;
	dog2->getBrain()->setIdea(0, "WOUF WOUF");
	dog1->getBrain()->showIdeas();
	std::cout << std::endl;
	dog2->getBrain()->showIdeas();
	for (int i = 0; i < ANIMALS; i++)
		delete array[i];
	return (0);
}
