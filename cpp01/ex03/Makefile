# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 06:53:13 by cjoanne           #+#    #+#              #
#    Updated: 2021/10/25 14:07:13 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bandit

SRC_LIST	=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
SRC_DIR		=	src/
SRC			=	$(addprefix $(SRC_DIR), $(SRC_LIST))

OBJ_LIST	=	$(SRC_LIST:.cpp=.o)
OBJ_DIR		=	.obj/
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_LIST))

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I $(HEADERS_DIR)

HEADERS_DIR		=	./include/
HEADERS_LIST	=	HumanA.hpp HumanB.hpp Weapon.hpp
HEADERS 		=	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

RM	=	rm -rf

# COLORS
GREEN = \033[0;32m
BLUE= \033[0;34m
RED = \033[0;31m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ) $(HEADERS)
	@$(CC) $(INCLUDES) $(OBJ) -o $(NAME)
	@echo "$(NAME): $(BLUE)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@$(CC) $(СFLAGS) $(INCLUDES) -c $< -o $@
	
$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)
	@echo "$(NAME): $(BLUE)creating $(NAME)$(RESET)"

clean :
	@$(RM) $(OBJ_DIR)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re : fclean all

.PHONY : all clean fclean re