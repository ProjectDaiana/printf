SOURCES	= \
	ft_check_format.c ft_printf.c ft_put_adr.c ft_put_hex.c ft_put_unsigned.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c
NAME	= libftprintf.a
OBJECTS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
${NAME}: $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
all:	$(NAME)
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re:	fclean all
.PHONY: all clean fclean re