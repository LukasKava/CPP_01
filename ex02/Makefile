# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 20:50:50 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/06 20:56:19 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force clean!"

re: fclean all
	@echo "remaking the files"