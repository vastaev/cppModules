# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 13:59:25 by cjoanne           #+#    #+#              #
#    Updated: 2021/10/21 12:19:58 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= phonebook.cpp

OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -I.

NAME			= iPhonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:			all clean fclean re test