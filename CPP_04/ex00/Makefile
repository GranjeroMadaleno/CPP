# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andefern <andefern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 09:28:09 by andefern          #+#    #+#              #
#    Updated: 2025/05/06 09:32:26 by andefern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRCS =		main.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongCat.cpp
			
OBJ = $(SRCS:%.cpp=%.o)
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
			
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@	

clean:

	$(RM) $(OBJ)

fclean: clean

	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

