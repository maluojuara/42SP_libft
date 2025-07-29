# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 02:38:04 by maluojuara        #+#    #+#              #
#    Updated: 2025/07/29 16:33:22 by malcosta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memcpy.c ft_memset.c ft_bzero.c\
ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c\
ft_strlen.c ft_tolower.c ft_toupper.c\
ft_strlcpy.c ft_atoi.c\
ft_memmove.c ft_memcmp.c ft_strchr.c\
ft_strrchr.c ft_memchr.c\
ft_calloc.c ft_strdup.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_strlcat.c ft_strncmp.c ft_strnstr.c\
ft_substr.c ft_strjoin.c ft_itoa.c\
ft_strtrim.c ft_split.c ft_strmapi.c\
ft_putnbr_fd.c ft_striteri.c\

SRCS_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstiter_bonus.c ft_lstmap_bonus.c\
ft_lstclear_bonus.c\


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

bonus: $(OBJS) $(OBJS_B)
	ar rc $(NAME) $(OBJS) $(OBJS_B)

re: fclean all

.PHONY: all clean fclean re bonus
