// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 13:08:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/13 11:19:14 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "PhoneBook.hpp"

static void display_menu(void)
{
	std::cout << "Please enter one of the following commands:" << std::endl;
	std::cout << "\tADD\n\tSEARCH\n\tEXIT\n>>";
}

static int  handle_input(PhoneBook *book)
{
	std::string in;
	int			ret;

	if (!std::getline(std::cin, in))
		return (1);
	if (in.length() == 0)
		return (3);
	if (in == "ADD")
	{
		while ((ret = book->add()))
		{
			std::cerr << "\nA contact can't have empty field(s)\n" << std::endl;
			if (ret == 6)
				return (1);
		}
		return (0);
	}
	else if (in == "SEARCH")
		return (book->search());
	else if (in == "EXIT")
		return (1);
	else
	{
		std::cerr << "Invalid command" << std::endl;
		return (2);
	}
	return (0);
}

int main(void)
{
	PhoneBook   book;
	int         ret;

	//Quit search if error
	//don't prompt again if \n in main menu
	std::cout << "\033[2J";
	std::cout << "\033[H";
	std::cout << "\tWELCOME TO MY AWESOME PHONE BOOK\n" << std::endl;
	display_menu();
	while (1)
	{
		// display_menu();
		ret = handle_input(&book);
		if (ret == 1)
			break ;
		std::cerr << ">> ";
	}
	std::cout << "BYE MY FRIEND!" << std::endl;
	return 0;
}
