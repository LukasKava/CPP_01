# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 18:25:02 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/05 22:12:15 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = brains
SRCS = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@echo "cleaned the files!"

fclean: clean
	rm -f $(NAME)
	@echo "force clean!"

re: fclean all
	@echo "remaking the files"