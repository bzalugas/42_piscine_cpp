// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 18:48:41 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/10 18:35:03 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

std::string	replaceStr(std::string text, std::string s1, std::string s2)
{
	size_t		pos;
	size_t		lastPos;
	std::string	res;

	pos = 0;
	lastPos = 0;
	while ((pos = text.find(s1, lastPos)) != std::string::npos)
	{
		res.append(text.substr(lastPos, pos - lastPos));
		res.append(s2);
		lastPos = pos + s1.length();
	}
	res.append(text.substr(lastPos, text.length() - lastPos));
	return (res);
}

int	getTextFromFile(std::string& s, std::string filename)
{
	char					*buff;
	std::ifstream			infile;
	std::string::size_type	size;

	infile.open(filename, std::ifstream::in);
	if (infile.fail())
	{
		std::cerr << "Error openning the file." << std::endl;
		return (0);
	}
	infile.seekg(0, infile.end);
	size = infile.tellg();
	infile.seekg(0, infile.beg);
	buff = new char[size];
	infile.read(buff, size);
	infile.close();
	s = buff;
	delete [] buff;
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string	filename;
	std::string	text;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <string to replace> <new string>" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (!getTextFromFile(text, filename))
		return (1);
	std::cout << text << std::endl << std::endl;
	text = replaceStr(text, s1, s2);
	std::cout << text << std::endl;
	return (0);
}
