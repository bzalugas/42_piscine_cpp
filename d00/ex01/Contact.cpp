// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:08:36 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/07 13:14:13 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
                 std::string phoneNumber, std::string darkSecret) :
    _firstName(firstName), _lastName(lastName), _nickname(nickname),
    _phoneNumber(phoneNumber), _darkSecret(darkSecret)
{
    return ;
}
Contact::Contact(void)
{
    return ;
}
Contact::~Contact(void)
{
    return ;
}

std::string Contact::getFirstName(void) const
{
    return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
    return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkSecret(void) const
{
    return (this->_darkSecret);
}

void        Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void        Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void        Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void        Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void        Contact::setDarkSecret(std::string darkSecret)
{
    this->_darkSecret = darkSecret;
}

void        Contact::display(void)
{
    std::cout << "First name:\t" << this->getFirstName() << std::endl;
    std::cout << "Last name:\t" << this->getLastName() << std::endl;
    std::cout << "Nickname:\t" << this->getNickname() << std::endl;
    std::cout << "Phone number:\t" << this->getPhoneNumber() << std::endl;
    std::cout << "Darkest secret:\t" << this->getDarkSecret() << std::endl;
}
