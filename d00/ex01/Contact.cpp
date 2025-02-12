// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:08:36 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/12 23:07:51 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){}
Contact::Contact(std::string first, std::string last, std::string nick,
				 std::string phone, std::string secret) :
	_firstName(first), _lastName(last), _nickname(nick), _phoneNumber(phone),
	_darkSecret(secret) {}
Contact::~Contact(void){}

std::string	Contact::getInfo(t_info info) const
{
	switch (info)
	{
		case firstName:
			return (this->_firstName);
		case lastName:
			return (this->_lastName);
		case nickname:
			return (this->_nickname);
		case phone:
			return (this->_phoneNumber);
		case secret:
			return (this->_darkSecret);
		default:
			return (NULL);
	}
}

void			Contact::setInfo(t_info info, std::string str)
{
	switch (info)
	{
		case firstName:
			this->_firstName = str;
			break;
		case lastName:
			this->_lastName = str;
			break;
		case nickname:
			this->_nickname = str;
			break;
		case phone:
			this->_phoneNumber = str;
			break;
		case secret:
			this->_darkSecret = str;
			break;
		default:
			break;
	}
}

void			Contact::display(void)
{
	std::cout << std::endl;
    std::cout << "\tFirst name:\t" << this->getInfo(firstName) << std::endl;
    std::cout << "\tLast name:\t" << this->getInfo(lastName) << std::endl;
    std::cout << "\tNickname:\t" << this->getInfo(nickname) << std::endl;
    std::cout << "\tPhone number:\t" << this->getInfo(phone) << std::endl;
    std::cout << "\tDarkest secret:\t" << this->getInfo(secret) << std::endl;
	std::cout << std::endl;
}
