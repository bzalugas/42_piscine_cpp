// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/17 19:12:38 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/24 10:06:32 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <ostream>
#define ANIMALS 4

void	test_brain(void)
{
	std::cout << "******** BRAIN TESTING ********" << std::endl;
	Brain	a;

	std::cout << "******** Ideas assignation ********" << std::endl;
	for (int i = 0; i < Brain::NB_IDEAS / 2; i++)
		a.setIdea(i, "Am I an idea ?");
	for (int i = Brain::NB_IDEAS / 2; i < Brain::NB_IDEAS; i++)
		a.setIdea(i, "YES I AM !");
	std::cout << "\nBrain a's ideas:" << std::endl;
	a.showIdeas();

	std::cout << "\nBrain b creation by copy of a." << std::endl;
	Brain	b(a);
	std::cout << "\nBrain b's ideas:" << std::endl;
	b.showIdeas();

	std::cout << "\nModification of the first 5 ideas in b" << std::endl;
	for (int i = 0; i < 5; i++)
		b.setIdea(i, "I AM THE BRAIN B !!!");
	std::cout << "b's ideas:" << std::endl;
	b.showIdeas();
	std::cout << "\na's ideas:" << std::endl;
	a.showIdeas();
	std::cout << std::endl;
}

void	test_animals(void)
{
	AAnimal	*array[ANIMALS];

	std::cout << "\n******** ANIMALS TESTING **********" << std::endl;
	std::cout << "******** Array assignation ********" << std::endl;
	for (int i = 0; i < ANIMALS / 2; i++)
	{
		array[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = ANIMALS / 2; i < ANIMALS; i++)
	{
		array[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "******** Test of copies *********" << std::endl;
	std::cout << "Setting some ideas in first dog & first cat" << std::endl;
	Dog	*dog1 = (Dog *)array[0];
	Cat *cat1 = (Cat *)array[ANIMALS / 2];
	for (int i = 0; i < Brain::NB_IDEAS / 4; i++)
	{
		dog1->getBrain()->setIdea(i, "My name is Rantamplan.");
		cat1->getBrain()->setIdea(i, "My name is Garfield.");
	}
	for (int i = Brain::NB_IDEAS / 4; i < Brain::NB_IDEAS / 2; i++)
	{
		dog1->getBrain()->setIdea(i, "My master is Luke.");
		cat1->getBrain()->setIdea(i, "I have no master, I'm free.");
	}
	std::cout << "Dog1's ideas:" << std::endl;
	dog1->getBrain()->showIdeas();
	std::cout << "\nCat1's ideas:" << std::endl;
	cat1->getBrain()->showIdeas();

	std::cout << "\nUsing '=' operator overload to copy dog1 into dog2" << std::endl;
	Dog *dog2 = (Dog *)array[1];
	*dog2 = *dog1;
	std::cout << "\nChanging the first idea of dog2" << std::endl;
	dog2->getBrain()->setIdea(0, "WOUF WOUF");
	std::cout << "Dog1's ideas:" << std::endl;
	dog1->getBrain()->showIdeas();
	std::cout << "\nDog2's ideas:" << std::endl;
	dog2->getBrain()->showIdeas();

	std::cout << "\nUsing copy constructor of cat to copy cat1 into cat2" << std::endl;
	Cat cat2(*cat1);
	std::cout << "\nChanging the first idea of cat2" << std::endl;
	cat2.getBrain()->setIdea(0, "Miaow Miaow");
	std::cout << "Cat1's ideas:" << std::endl;
	cat1->getBrain()->showIdeas();
	std::cout << "\nCat2's ideas:" << std::endl;
	cat2.getBrain()->showIdeas();

	std::cout << std::endl;
	for (int i = 0; i < ANIMALS; i++)
	{
		delete array[i];
		std::cout << std::endl;
	}
}

int	main(void)
{
	// AAnimal a;
	test_brain();
	test_animals();
	return (0);
}
