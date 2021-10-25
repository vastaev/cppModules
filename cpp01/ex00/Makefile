# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 06:53:13 by cjoanne           #+#    #+#              #
#    Updated: 2021/10/24 11:37:21 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	

SRC		=	
SRC_DIR	=	src/
SRC		=	$(addprefix $(SRCS_DIR), $(SRCS_LIST))

OBJ_LIST	=	$(SRCS_LIST:.c=.o)
OBJ_DIR		=	.obj/
OBJ			=	$(addprefix $(OBJS_DIR), $(OBJS_LIST))

CC 			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I $(HEADERS_DIR)

HEADERS_DIR		=	./include/
HEADERS_LIST	=	
HEADERS 		=	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

RM	=	rm -rf

# COLORS
GREEN = \033[0;32m
BLUE= \033[0;34m
RED = \033[0;31m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS) $(HEADERS)
	@$(CC) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "$(NAME): $(BLUE)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	@$(CC) $(СFLAGS) $(INCLUDES) -c $< -o $@
	
$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)
	@echo "$(NAME): $(BLUE)creating $(NAME)$(RESET)"

clean :
	@$(RM) $(OBJS_DIR)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re : fclean all

.PHONY : all clean fclean re