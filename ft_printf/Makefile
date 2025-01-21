# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 21:23:00 by anzahoro          #+#    #+#              #
#    Updated: 2025/01/15 21:46:56 by anzahoro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthex.c ft_putptr.c ft_handle_format.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $@ $^
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
