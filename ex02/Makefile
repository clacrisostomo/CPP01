# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 17:56:20 by csantos-          #+#    #+#              #
#    Updated: 2023/08/27 23:13:34 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = refs

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(SRC) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all