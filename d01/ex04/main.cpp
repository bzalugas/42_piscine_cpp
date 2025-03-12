// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/07 18:48:41 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 11:18:16 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <cstring>

char*	replaceStr(std::string text, std::string s1, std::string s2)
{
	size_t		pos;
	size_t		lastPos;
	std::string	res;
	char*		res_return;

	if (s1.length() < 1)
	{
		res_return = new char[text.length() + 1];
		std::strcpy(res_return, text.c_str());
		return (res_return);
	}
	pos = 0;
	lastPos = 0;
	while ((pos = text.find(s1, lastPos)) != std::string::npos)
	{
		res.append(text.substr(lastPos, pos - lastPos));
		res.append(s2);
		lastPos = pos + s1.length();
	}
	res.append(text.substr(lastPos, text.length() - lastPos));
	res_return = new char[res.length() + 1];
	std::strcpy(res_return, res.c_str());
	return (res_return);
}

int	getTextFromFile(std::string& s, char* filename)
{
	char					*buff;
	std::ifstream			infile;
	std::string::size_type	size;

	infile.open(filename, std::ifstream::in);
	if (infile.fail())
	{
		std::cerr << "Error openning the infile." << std::endl;
		return (0);
	}
	infile.seekg(0, infile.end);
	size = infile.tellg();
	infile.seekg(0, infile.beg);
	buff = new char[size + 1];
	infile.read(buff, size);
	infile.close();
	s.assign(buff, buff + size);
	delete [] buff;
	return (1);
}

int	writeToFile(char* filename, char* txt)
{
	std::ofstream	outfile;
	std::string		outname;
	size_t			len;

	len = std::strlen(txt);
	outname = filename;
	outname.append(".replace");
	outfile.open(outname.c_str(), std::ofstream::out);
	if (outfile.fail())
	{
		std::cerr << "Error openning the outfile." << std::endl;
		return (0);
	}
	outfile.write(txt, len);
	outfile.close();
	return (1);
}

int	main(int argc, char *argv[])
{
	char*		filename;
	std::string	text;
	char*		res;
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
	res = replaceStr(text, s1, s2);
	if (!writeToFile(filename, res))
		return (1);
	delete [] res;
	return (0);
}
