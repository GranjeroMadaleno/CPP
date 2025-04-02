# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andefern <andefern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 15:07:26 by andefern          #+#    #+#              #
#    Updated: 2025/03/28 15:13:54 by andefern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar brainz!
OBJ = $(SRCS:.cpp=.o)
RM = rm -f
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =		main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			zombieHorde.cpp \
			
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@	

clean:

	$(RM) $(OBJ)

fclean: clean

	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
