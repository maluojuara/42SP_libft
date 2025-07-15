# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 10:34:34 by malcosta          #+#    #+#              #
#    Updated: 2025/07/15 11:55:04 by malcosta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = *.c tests/*.c
CC = cc 
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)