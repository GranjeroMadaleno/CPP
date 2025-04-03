# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andefern <andefern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 13:52:55 by andefern          #+#    #+#              #
#    Updated: 2025/04/03 13:53:45 by andefern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN

SRCS =		main.cpp

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
