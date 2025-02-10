// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:50:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/10 23:24:13 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nextContact = 0;
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook(void){}

Contact	*PhoneBook::_getNextAvailContact(void)
{
	return (&this->_contacts[this->_nextContact]);
}

int     PhoneBook::add(void)
{
    std::string tmp;
    Contact     *contact;

	contact = this->_getNextAvailContact();
	std::cout << "************************************************" << std::endl;
    std::cout << "*              Create a new contact            *" << std::endl;

    std::cout << "* First name:                                  *";
    std::cout << std::string(34, '\b');
    std::cin >> tmp;
	if (tmp.length() <= 1)
		return (1);
    contact->setInfo(firstName, tmp);

	std::cout << "* Last name:                                   *";
	std::cout << std::string(35, '\b');
	std::cin >> tmp;
	if (tmp.length() <= 1)
		return (1);
	contact->setInfo(lastName, tmp);

	std::cout << "* Nickname:                                    *";
	std::cout << std::string(36, '\b');
	std::cin >> tmp;
	if (tmp.length() <= 1)
		return (1);
	contact->setInfo(nickname, tmp);

	std::cout << "* Phone number:                                *";
	std::cout << std::string(32, '\b');
	std::cin >> tmp;
	if (tmp.length() <= 1)
		return (1);
	contact->setInfo(phone, tmp);

	std::cout << "* Darkest secret:                              *";
	std::cout << std::string(30, '\b');
	std::cin >> tmp;
	if (tmp.length() <= 1)
		return (1);
	contact->setInfo(secret, tmp);
    std::cout << "************************************************" << std::endl;
	this->_nbContacts = this->_nbContacts + 1 < CONTACTS_LEN ? this->_nbContacts + 1 : this->_nbContacts;
	this->_nextContact = (this->_nextContact + 1) % CONTACTS_LEN;
    return (0);
}

int		PhoneBook::search(void)
{
	Contact		contact;
	std::string	str;
	int			index;

	std::cout << "********************************" << std::endl;
	std::cout << "*         Contacts list        *" << std::endl;
	std::cout << "   INDEX  |FIRST NAME| LAST NAME" << std::endl;
	for (int i = 0; i < this->_nbContacts; i++)
	{
		contact = this->_contacts[i];
		std::cout << "*         " << i << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(firstName)) << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(lastName)) << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(nickname)) << "*" << std::endl;
	}
	std::cout << "********************************" << std::endl;
	std::cout << "Please enter the index of the contact you're searching for: ";
	std::cin >> index;
	while (std::cin.fail())
	{
		std::cout << "Please enter a number: ";
		std::cin >> index;
	}
	if (index < 0 || index >= this->_nbContacts)
		return (1);
	this->_contacts[index].display();
	return (0);
}

std::string	PhoneBook::_formatContactInfo(std::string str) const
{
	if (str.length() > MAX_INFO_LEN)
		return (str.substr(0, MAX_INFO_LEN - 1) + ".");
	return (std::string(MAX_INFO_LEN, ' ') + str);
}
