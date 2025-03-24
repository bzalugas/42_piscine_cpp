// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Inheritance.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/20 09:32:32 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/21 11:33:46 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

class Animal {
public:
	Animal(void) : _nbLegs(4){ std::cout << "Animal constructor called." << std::endl; }
	Animal(int legs) : _nbLegs(legs){ std::cout << "Animal constructor called with " << legs << " legs." << std::endl; }
	Animal(Animal const &copy) : _nbLegs(copy.getLegs()){ std::cout << "Animal copy constructor called." << std::endl; }
	~Animal(void){ std::cout << "Animal destructor called." << std::endl; }

	Animal	&operator=(Animal const &right){std::cout << "Animal = overload." << std::endl; _nbLegs = right.getLegs(); return *this;}

	void	run(int dist) { std::cout << "I run " << dist << "km !" << std::endl;}
	int		getLegs(void) const { return this->_nbLegs;}

private:
	int	_nbLegs;


};

class	Cat : public Animal{
public:
	Cat(void) : Animal(4), name("Noname") { std::cout << "Cat constructor called." << std::endl; }
	Cat(std::string const &name) : Animal(4), name(name) { std::cout << "Cat constructor called with name " << name << std::endl;}
	Cat(Cat const &copy) { std::cout << "Cat copy constructor called." << std::endl; *this = copy;}
	~Cat(void) { std::cout << "Cat destructor called." << std::endl;}

	Cat	&operator=(Cat const &right) { std::cout << "Cat = overload." << std::endl; name = right.name; return *this;}

	std::string	name;
};

int main(void)
{
	Cat a;
	Cat b("Merlin");
	// a = Cat("John");
	Cat c = Cat("John");
	std::cout << "The cat " << a.name << " has " << a.getLegs() << " legs." << std::endl;
	std::cout << "The cat " << b.name << " has " << b.getLegs() << " legs." << std::endl;
	std::cout << "The cat " << c.name << " has " << c.getLegs() << " legs." << std::endl;
	return 0;
}
