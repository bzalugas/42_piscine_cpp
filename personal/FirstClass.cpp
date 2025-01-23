// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FirstClass.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/01/23 14:37:35 by bazaluga          #+#    #+#             //
//   Updated: 2025/01/23 14:44:49 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FirstClass.hpp"
#include <iostream>

FirstClass::FirstClass(void){
	std::cout << "Constructor called" << std::endl;
	return ;
}

FirstClass::~FirstClass(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	FirstClass::fct(void){
	std::cout << "Function fct called" << std::endl;
	return ;
}
