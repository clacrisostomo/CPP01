# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 16:08:33 by csantos-          #+#    #+#              #
#    Updated: 2023/08/27 18:01:05 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRC = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

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