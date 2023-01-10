NAME = libftprintf.a

SOURCES = ft_printf.c ft_printf_c.c ft_putnbr_fd_d_or_i.c ft_printf_d_or_i.c ft_printf_u.c ft_printf_s.c ft_printf_x.c ft_printf_xx.c ft_printf_p.c ft_itoa.c ft_printf_percent.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJECTS)
		$(AR) -rc $@ $?
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
