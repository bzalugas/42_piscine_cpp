// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 13:08:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/11 13:35:04 by bazaluga         ###   ########.fr       //
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

    std::getline(std::cin, in);
    if (in == "ADD")
    {
        while (book->add())
            std::cerr << "\nA contact can't have empty field(s)\n" << std::endl;
        return (0);
    }
    else if (in == "SEARCH")
        return (book->search());
    else if (in == "EXIT")
        return (1);
    else
        return (2);
    return (0);
}

int main(void)
{
    PhoneBook   book;
    int         ret;

    std::cout << "\033[2J";
	std::cout << "\033[H";
    std::cout << "\tWELCOME TO MY AWESOME PHONE BOOK\n" << std::endl;
    while (1)
    {
        display_menu();
        ret = handle_input(&book);
        if (ret == 1)
            break ;
        if (ret == 2)
            std::cerr << "\nPlease enter a correct command. You can do it!\n" << std::endl;
    }
    std::cout << "BYE MY FRIEND!" << std::endl;
    // Contact c;

    // c = Contact("Bastien", "Zalugas", "baza", "0785579644", "I love planes");
    // book.addContact(c);
    // c = Contact("dlsjf", "kdsfh", "coucou", "0785579644", "012345678910");
    // book.addContact(c);
    // c = Contact("Bonjour a tous, je m'appelle Bastien", "Zalugas", "baza", "0785579644", "I love planes");
    // book.addContact(c);
    // c = Contact("B", "Z", "baza", "644", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "fldsj", "baza", "0785579644", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "dslfkjsdlfjsldjfljdas", "baza", "0785579644", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "012345678910", "baza", "078557964409832049802384008", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "LAST", "baza", "0785579644fdlsjflsj", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "NEUVIEME", "baza", "0785579644fdlsjflsj", "I love planes");
    // book.addContact(c);
    // c = Contact("Bastien", "DIXIEME", "baza", "0785579644fdlsjflsj", "I love planes");
    // book.addContact(c);
    // book.displayContacts();
    return 0;
}
