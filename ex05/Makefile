# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 16:05:28 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/09 16:07:32 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Harl.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"
