// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:50:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/07 13:14:37 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

int     PhoneBook::add(void)
{
    std::string tmp;
    Contact     contact;

    std::cout << "************************************************" << std::endl;
    std::cout << "*              Create a new contact            *" << std::endl;
    std::cout << "* First name: ";
    std::cin >> tmp;
    contact.setFirstName(tmp);
    std::cout << "************************************************" << std::endl;
    return (0);
}
