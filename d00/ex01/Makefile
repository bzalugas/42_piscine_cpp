#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 12:54:14 by bazaluga          #+#    #+#              #
#    Updated: 2025/02/07 13:11:08 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	:=	phoneBook
SRC		:=	PhoneBook.cpp Contact.cpp main.cpp
OBJ		:=	$(SRC:.cpp=.o)
CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
			mkdir -p $(OBJDIR)

$(NAME):	$(OBJDIR) $(OBJ)
			$(CC) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

.PHONY:		all clean fclean
