# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 10:54:32 by htalhaou          #+#    #+#              #
#    Updated: 2023/09/07 12:58:24 by htalhaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  AMateria.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  Character.cpp \
	  MateriaSource.cpp 
	  
NAME = Interface

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re