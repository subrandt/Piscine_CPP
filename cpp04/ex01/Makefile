# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 09:47:41 by subrandt          #+#    #+#              #
#    Updated: 2023/02/23 13:00:47 by subrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		brain

SRC =		main.cpp		\
			Animal.cpp		\
			Dog.cpp			\
			Cat.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Brain.cpp

OBJ =		$(SRC:.cpp=.o)

CC =		c++

CFLAGS =	-Wall -Werror -Wextra -std=c++98 -g -Wno-shadow

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