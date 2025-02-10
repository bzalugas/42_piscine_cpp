// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/07 11:57:46 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/10 14:36:09 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

typedef enum e_info
{
	firstName=0,
	lastName,
	nickname,
	phone,
	secret
}           t_info;

class Contact{

public:
	Contact(void);
	~Contact(void);

	std::string getInfo(t_info info) const;

	void        setInfo(t_info info, std::string str);

	void        display(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkSecret;
};

#endif
