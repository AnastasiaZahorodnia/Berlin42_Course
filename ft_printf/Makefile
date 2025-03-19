NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_printf_utils.c \
	ft_printf_formats.c

OBJS = $(SRCS:.c=.o)
CC = cc
GFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	$(CC) $(GFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re