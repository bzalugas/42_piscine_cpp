// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/21 13:14:14 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/21 13:41:30 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_H
# define BRAIN_H
# include <string>

class	Brain {
public:
	static const int NB_IDEAS = 100;

	Brain(void);
	Brain(Brain const &copy);
	~Brain(void);

	Brain	&operator=(Brain const &right);

	const std::string	&getIdea(int i) const;
	void				setIdea(int i, const std::string &idea);

private:
	std::string	ideas[NB_IDEAS];
};

#endif // BRAIN_H
