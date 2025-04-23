// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/23 17:57:41 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>
#define ANIMALS 4

void	test_brain(void)
{
	std::cout << "******** BRAIN TESTING ********" << std::endl;
	Brain	a;

	std::cout << "Ideas assignation" << std::endl;
	for (int i = 0; i < Brain::NB_IDEAS / 2; i++)
		a.setIdea(i, "Am I an idea ?");
	for (int i = Brain::NB_IDEAS / 2; i < Brain::NB_IDEAS; i++)
		a.setIdea(i, "YES I AM !");
	a.showIdeas();

	std::cout << "\nBrain b creation by copy of a." << std::endl;
	Brain	b(a);
	b.showIdeas();

	std::cout << "Modification of the 5 first ideas in b" << std::endl;
	for (int i = 0; i < 5; i++)
		b.setIdea(i, "I AM THE BRAIN B !!!");
	std::cout << "b's ideas:" << std::endl;
	b.showIdeas();
	std::cout << "\na's ideas:" << std::endl;
	a.showIdeas();
}

int	main(void)
{
	// Animal	*array[ANIMALS];

	test_brain();
	// std::cout << "******** Array assignation ********" << std::endl;
	// for (int i = 0; i < ANIMALS / 2; i++)
	// 	array[i] = new Dog();
	// for (int i = ANIMALS / 2; i < ANIMALS; i++)
	// 	array[i] = new Cat();
	// std::cout << "\n" << std::endl;

	// std::cout << "******** Test of copies *********" << std::endl;
	// std::cout << "Setting some ideas in first dog" << std::endl;
	// Dog	*dog1 = (Dog *)array[0];
	// for (int i = 0; i < Brain::NB_IDEAS / 4; i++)
	// 	dog1->getBrain()->setIdea(i, "My name is Rantamplan");
	// for (int i = Brain::NB_IDEAS / 4; i < Brain::NB_IDEAS / 2; i++)
	// 	dog1->getBrain()->setIdea(i, "My master is Luke");
	// std::cout << "Checking ideas of first dog :" << std::endl;
	// dog1->getBrain()->showIdeas();

	// std::cout << "\nSetting dog2 = dog1" << std::endl;
	// Dog *dog2 = (Dog *)array[1];
	// *dog2 = *dog1;
	// dog2->getBrain()->setIdea(0, "WOUF WOUF");
	// dog1->getBrain()->showIdeas();
	// std::cout << std::endl;
	// dog2->getBrain()->showIdeas();
	// for (int i = 0; i < ANIMALS; i++)
	// 	delete array[i];
	return (0);
}
