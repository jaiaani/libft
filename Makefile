# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 23:04:23 by jados-sa          #+#    #+#              #
#    Updated: 2024/10/15 00:51:41 by jados-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRCS += ft_strlen.c

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
