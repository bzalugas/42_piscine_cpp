#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 12:54:14 by bazaluga          #+#    #+#              #
#    Updated: 2025/03/07 09:37:28 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	:=	bank
SRCDIR	:=	.
OBJDIR	:=	.obj
SRC		:=	Account.cpp tests.cpp
OBJ		:=	$(SRC:.cpp=.o)
SRC		:=	$(addprefix $(SRCDIR)/, $(SRC))
OBJ		:=	$(addprefix $(OBJDIR)/, $(OBJ))
CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:			$(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp | $(OBJDIR)
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
			    mkdir -p $(OBJDIR)

$(NAME):	    $(OBJ)
			    $(CC) $(OBJ) -o $(NAME)

clean:
			    rm -rf $(OBJDIR)

fclean:		    clean
			    rm -f $(NAME)

re:			    fclean $(NAME)

.PHONY:			all clean fclean
