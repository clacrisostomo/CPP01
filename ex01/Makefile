# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 17:20:29 by csantos-          #+#    #+#              #
#    Updated: 2023/08/27 18:01:11 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRC = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

INC = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME) $(INC)

$(NAME): $(OBJ) $(INC)
		$(CC) $(SRC) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@
	
git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME) $(OBJ)

re: fclean all