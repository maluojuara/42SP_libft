# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 02:38:04 by maluojuara        #+#    #+#              #
#    Updated: 2025/07/20 02:52:50 by maluojuara       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_memcpy.c ft_memset.c ft_bzero.c\
ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c \
ft_strlen.c ft_tolower.c ft_toupper.c\
ft_strlcpy.c \
ft_memmove.c ft_memcmp.c ft_strchr.c\
ft_strrchr.c ft_memchr.c \
ft_calloc.c ft_strdup.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

CFILES_O = $(CFILES:.c=.o)
BONUS_FILES_O = $(BONUS_FILES:.c=.o)

$(NAME): $(CFILES_O)
	ar -rc $(NAME) $(CFILES_O)

all: $(NAME)

clean:
	$(RM) $(CFILES_O) $(BONUS_FILES_O)

fclean: clean
	$(RM) $(NAME)

# bonus: $(BONUS_FILES_O)
# 	ar -rc $(NAME) $(BONUS_FILES_O)

re: fclean all

.PHONY: all clean fclean re bonus