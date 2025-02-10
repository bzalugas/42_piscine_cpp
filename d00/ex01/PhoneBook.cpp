// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:50:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/10 15:03:53 by bazaluga         ###   ########.fr       //
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

    std::cout << "*              Create a new contact            *" << std::endl;
    std::cout << "* First name:                                  *";
    std::cout << std::string(34, '\b');
    std::cin >> tmp;
    contact.setInfo(firstName, tmp);
    std::cout << "************************************************" << std::endl;
    return (0);
}
