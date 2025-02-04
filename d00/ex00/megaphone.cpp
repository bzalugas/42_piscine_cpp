// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/02/04 11:28:17 by bazaluga          #+#    #+#             //
//   Updated: 2025/02/04 14:31:37 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                std::cout << char(argv[i][j] - 32);
            else
                std::cout << argv[i][j];
        }
    }
    std::cout << std::endl;
    return (0);
}
