# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 12:40:34 by subrandt          #+#    #+#              #
#    Updated: 2023/03/22 15:34:34 by subrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		base

SRC =		main.cpp			\

OBJ =		$(SRC:.cpp=.o)

CC =		c++

CFLAGS =	-Wall -Werror -Wextra -std=c++98 -g

all:		$(NAME)

%.o: %.cpp
			$(CC) $(CFLAGS) -c -o $@ $<

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:		
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re