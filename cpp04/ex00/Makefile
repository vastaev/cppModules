# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nephilister <nephilister@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 12:33:01 by cjoanne           #+#    #+#              #
#    Updated: 2021/11/14 04:58:42 by nephilister      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRC		=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

HEADER	=	Animal.hpp Dog.hpp Cat.hpp Libs.hpp WrongCat.hpp WrongAnimal.hpp

CXX		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC) $(HEADER)
	$(CXX) $(FLAGS) -c $(SRC)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean r