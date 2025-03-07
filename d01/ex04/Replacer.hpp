// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Replacer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 18:59:59 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 19:02:45 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef REPLACER_H
# define REPLACER_H
# include <fstream>

class Replacer {

public:
	Replacer(std::string filename, std::string s1, std::string s2);
	~Replacer();

	int	replace(void);

private:
	std::ifstream	_infile;
	std::ofstream	_outfile;
	std::string		_s1;
	std::string		_s2;
};


#endif
