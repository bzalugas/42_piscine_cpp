// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:30:58 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/10 23:06:12 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# define CONTACTS_LEN 8
# define MAX_INFO_LEN 10

class PhoneBook {

public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    displayContacts(void) const;
    int     add(void);//ask the user for infos & call addContact if everything ok
    int     search(void);//display contacts infos, ask for index then display all infos of contact

private:
    Contact _contacts[CONTACTS_LEN];
    int     _nbContacts;
    int     _nextContact;

    std::string _formatContactInfo(std::string str) const;
    Contact 	*_getNextAvailContact(void);
};

#endif
