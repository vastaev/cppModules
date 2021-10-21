# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 13:59:25 by cjoanne           #+#    #+#              #
#    Updated: 2021/10/21 21:59:12 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= phonebook.cpp contact.cpp main.cpp

OBJS			= $(SRCS:.cpp=.o)

HEADERS			= contact.hpp phonebook.hpp

CLANG			= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -I.

NAME			= iPhonebook

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test