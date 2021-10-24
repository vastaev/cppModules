# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 06:53:13 by cjoanne           #+#    #+#              #
#    Updated: 2021/10/24 07:01:33 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account

HEADER	=	Account.hpp

SRC		=	Account.cpp		tests.cpp

FLAGS	=   -Wall -Wextra -Werror 

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC) $(HEADER)
	clang++ $(FLAGS) -c $(SRC)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re