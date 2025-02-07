// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 12:30:58 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/07 12:55:00 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# define CONTACTS_LEN 8

class PhoneBook {

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    displayContacts(void) const;
        int     add(void);//ask the user for infos & call addContact if everything ok
        int     search(void) const;//display contacts infos, ask for index then display all infos of contact

    private:
        Contact _contacts[CONTACTS_LEN];

        void    addContact(Contact *contact);//fct to add a contact to the contacts array (called by add function)
};

#endif
