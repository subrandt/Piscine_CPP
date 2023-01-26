# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 15:05:57 by subrandt          #+#    #+#              #
#    Updated: 2023/01/26 18:04:18 by subrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		account

SRC =		main.cpp 		\
			Account.cpp

OBJ =		$(SRC:.cpp=.o)

CC =		c++

CFLAGS =	-Wall -Werror -Wextra -std=c++98 -Iincludes -g 

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
