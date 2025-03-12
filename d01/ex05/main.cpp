// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 14:01:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 14:35:41 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"

int	main(void)
{
	Harl	h;

	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("DEBUG");
	h.complain("test");
	h.complain("INFO");
	h.complain("INFO");
	h.complain("test");
	h.complain("WARNING");
	h.complain("WARNING");
	h.complain("WARNING");
	h.complain("test");
	h.complain("ERROR");
	h.complain("ERROR");
	h.complain("test");
	h.complain("ERROR");
	h.complain("ERROR");

	return 0;
}
