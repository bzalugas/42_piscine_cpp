// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:50:44 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/11 13:29:07 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>

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
	std::cout << "\033[2J";
	std::cout << "\033[H";
	std::cout << "************************************************" << std::endl;
    std::cout << "*              Create a new contact            *" << std::endl;

    std::cout << "* First name:                                  *";
    std::cout << std::string(34, '\b');
    std::getline(std::cin, tmp);
	if (tmp.length() <= 1)
		return (1);
    contact->setInfo(firstName, tmp);

	std::cout << "* Last name:                                   *";
	std::cout << std::string(35, '\b');
	std::getline(std::cin, tmp);
	if (tmp.length() <= 1)
		return (2);
	contact->setInfo(lastName, tmp);

	std::cout << "* Nickname:                                    *";
	std::cout << std::string(36, '\b');
	std::getline(std::cin, tmp);
	if (tmp.length() <= 1)
		return (3);
	contact->setInfo(nickname, tmp);

	std::cout << "* Phone number:                                *";
	std::cout << std::string(32, '\b');
	std::getline(std::cin, tmp);
	if (tmp.length() <= 1)
		return (4);
	contact->setInfo(phone, tmp);

	std::cout << "* Darkest secret:                              *";
	std::cout << std::string(30, '\b');
	std::getline(std::cin, tmp);
	if (tmp.length() <= 1)
		return (5);
	contact->setInfo(secret, tmp);
    std::cout << "************************************************" << std::endl;
	this->_incrContactsNb();
    return (0);
}

std::string	PhoneBook::_formatContactInfo(std::string str) const
{
	if (str.length() > MAX_INFO_LEN)
		return (str.substr(0, MAX_INFO_LEN - 1) + ".");
	return (std::string(MAX_INFO_LEN - str.length(), ' ') + str);
}

void	PhoneBook::displayContacts(void) const
{
	Contact		contact;
	std::string	str;

	std::cout << "\033[2J";
	std::cout << "\033[H";
	std::cout << "*************************************************" << std::endl;
	std::cout << "*                 CONTACTS LIST                 *" << std::endl;
	std::cout << "*************************************************" << std::endl;
	if (this->_nbContacts == 0)
	{
		std::cout << "\n\tNO CONTACT YET" << std::endl;
		return ;
	}
	std::cout << "* |   INDEX  |FIRST NAME| LAST NAME| NICKNAME | *" << std::endl;
	for (int i = 0; i < this->_nbContacts; i++)
	{
		contact = this->_contacts[i];
		std::cout << "* |         " << i << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(firstName)) << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(lastName)) << "|";
		std::cout << this->_formatContactInfo(contact.getInfo(nickname)) << "| *" << std::endl;
	}
	std::cout << "*************************************************" << std::endl;
}

bool	valid_number(std::string s)
{
	if (s.empty())
		return (false);
	for (std::string::iterator it = s.begin(); it != s.end(); it++)
		if (!std::isdigit(*it))
			return (false);
	return (true);
}

int		PhoneBook::search(void)
{
	int			index;
	std::string	input;

	this->displayContacts();
	if (this->_nbContacts == 0)
		return (0);
	while (1)
	{
		std::cout << "Please enter the index of the contact you're searching for: ";
		std::cin.clear();
		if (std::getline(std::cin, input) && valid_number(input))
		{
			index = std::stoi(input);index = std::stoi(input);
			if (index < 0 || index >= this->_nbContacts)
				std::cerr << "\nPLEASE ENTER AN INTEGER IN THE CORRECT RANGE\n" << std::endl;
			else
				break ;
		}
		else
			std::cerr << "\nPLEASE ENTER A CORRECT INTEGER\n" << std::endl;
	}
	this->_contacts[index].display();
	return (0);
}

void		PhoneBook::addContact(Contact c)
{
	Contact *contact;
	contact = this->_getNextAvailContact();
	*contact = c;
	this->_incrContactsNb();
}

void		PhoneBook::_incrContactsNb(void)
{
	this->_nbContacts = this->_nbContacts + 1 <= CONTACTS_LEN ? this->_nbContacts + 1 : this->_nbContacts;
	this->_nextContact = (this->_nextContact + 1) % CONTACTS_LEN;
}
