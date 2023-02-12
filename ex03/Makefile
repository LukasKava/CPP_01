# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 21:16:45 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/06 21:18:43 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\


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