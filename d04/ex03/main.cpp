// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/24 11:09:00 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 12:17:52 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

void	subject_tests(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter	*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	my_tests(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*mike = new Character("Mike");
	std::cout << "Created new character: " << mike->getName() << std::endl;
	ICharacter	*john = new Character("John");
	std::cout << "Created new character: " << john->getName() << std::endl;

	AMateria	*tmp;
	john->equip(src->createMateria("ice"));
	john->equip(src->createMateria("cure"));
	john->equip(src->createMateria("cure"));
	john->equip(src->createMateria("cure"));
	tmp = src->createMateria("cure");
	john->equip(tmp);
	delete tmp;

	john->use(5, *mike);
	john->use(2, *mike);
	mike->use(0, *john);
	tmp = john->getMateria(0);
	john->unequip(0);
	delete tmp;
	john->use(0, *mike);

	// Character	*tmp = new Character(*((Character *)john));
	*mike = *john;
	mike->equip(src->createMateria("ice"));
	mike->use(0, *mike);
	john->use(0, *john);
	delete mike;
	delete john;
	delete src;
}

int	main(void)
{
	std::cout << "******** SUBJECT TESTS ********" << std::endl;
	subject_tests();
	std::cout << "********    MY TESTS  ********" << std::endl;
	my_tests();
	return (0);
}
