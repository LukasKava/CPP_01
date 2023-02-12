# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 13:24:11 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/06 13:28:49 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = horde
SRCS = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@echo "clean!"

fclean:
	rm -f $(NAME)
	@echo "force clean!"

re: fclean all
	@echo "remaking the files"
