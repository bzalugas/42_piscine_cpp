// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Replacer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 19:05:33 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/07 19:10:56 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2) :
	_infile(std::ifstream(filename)), _s1(s1), _s2(s2),
	_outfile(std::ofstream(filename.append(".replace"))) {}

Replacer::~Replacer(void) {}

int	Replacer::replace(void)
{

}
