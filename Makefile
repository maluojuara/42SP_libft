# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 10:34:34 by malcosta          #+#    #+#              #
#    Updated: 2025/07/17 21:34:32 by maluojuara       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = *.c tests/*.c tests/runners/*.c
CC = cc 
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
	