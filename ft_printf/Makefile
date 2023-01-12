NAME = libftprintf.a

SOURCES = ft_printf.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd_u.c ft_putnbr_fd_x.c ft_putnbr_fd_xx.c ft_putnbr_fd_p.c

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
