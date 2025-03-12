// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/03/12 14:01:19 by bazaluga          #+#    #+#             //
//   Updated: 2025/03/12 14:29:14 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"

int	main(void)
{
	Harl	h;

	h.complain("debug");
	h.complain("debug");
	h.complain("debug");
	h.complain("debug");
	h.complain("debug");
	h.complain("test");
	h.complain("info");
	h.complain("info");
	h.complain("test");
	h.complain("warning");
	h.complain("warning");
	h.complain("warning");
	h.complain("test");
	h.complain("error");
	h.complain("error");
	h.complain("test");
	h.complain("error");
	h.complain("error");

	return 0;
}
