# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nephilister <nephilister@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 12:33:01 by cjoanne           #+#    #+#              #
#    Updated: 2021/11/01 20:21:51 by nephilister      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRC		=	main.cpp Fixed.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC)
	clang++ $(FLAGS) -c $(SRC)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean r