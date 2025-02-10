#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 12:54:14 by bazaluga          #+#    #+#              #
#    Updated: 2025/02/10 11:13:47 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	:=	phoneBook
SRCDIR	:=	.
OBJDIR	:=	.obj
SRC		:=	PhoneBook.cpp Contact.cpp main.cpp
OBJ		:=	$(SRC:.cpp=.o)
OBJ		:=	$(addprefix $(OBJDIR)/, $(OBJ))
SRC		:=	$(addprefix $(SRCDIR)/, $(SRC))
CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp | $(OBJDIR)
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
			mkdir -p $(OBJDIR)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJDIR)

fclean:	clean
		rm -f $(NAME)

.PHONY:	all clean fclean
