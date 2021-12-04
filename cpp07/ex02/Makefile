NAME	=	ex02

SRC		=	main.cpp

HEADER 	=	Array.hpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC) $(HEADER)
	c++ $(FLAGS) -c $(SRC)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean r