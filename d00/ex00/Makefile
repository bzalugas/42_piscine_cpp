#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 12:54:14 by bazaluga          #+#    #+#              #
#    Updated: 2025/01/23 14:17:24 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	:=	megaphone
SRC		:=	megaphone.cpp
OBJDIR	:=	.obj
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME)

$(OBJDIR)/%.o:		%.c
					$(CC) $(CFLAGS) -c $< -o $@

$(NAME):			$(OBJ)
					$(CC) $(OBJ) -o $(NAME)

clean:
					rm -f $(OBJ)

fclean:				clean
					rm -f $(NAME)

.PHONY:				all clean fclean
