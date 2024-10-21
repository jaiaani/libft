# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 23:04:23 by jados-sa          #+#    #+#              #
#    Updated: 2024/10/20 16:46:34 by jados-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRCS += ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c	ft_strlcpy.c
SRCS += ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
SRCS += ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_substr.c
SRCS += ft_strdup.c ft_strtrim.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all = $(NAME)

.c.o:
	$(CC) -c $(FLAGS) -o $@ $<

$(NAME): $(OBJS)
	ar rcs $@ $^

.PHONY: clean

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
