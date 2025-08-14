# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andefern <andefern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 11:51:37 by andefern          #+#    #+#              #
#    Updated: 2025/08/13 12:17:55 by andefern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

SRCS =		main.cpp \
			Base.cpp \
			
			
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

