// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 11:57:46 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/07 12:44:20 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact{

    public:
        Contact(void);
        Contact(std::string firstName, std::string lastName, std::string nickname,
                std::string phoneNumber, std::string darkSecret);
        ~Contact(void);

        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickname(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkSecret(void) const;

        void        setFirstName(std::string firstName);
        void        setLastName(std::string lastName);
        void        setNickname(std::string nickname);
        void        setPhoneNumber(std::string phoneNumber);
        void        setDarkSecret(std::string darkSecret);

        void        display(void);

    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkSecret;
};

#endif
