# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 14:45:38 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/07 14:49:49 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"