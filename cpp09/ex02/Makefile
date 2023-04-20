# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 12:21:59 by subrandt          #+#    #+#              #
#    Updated: 2023/04/20 10:21:10 by subrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		PmergeMe

SRC =		main.cpp		\
			PmergeMe.cpp

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