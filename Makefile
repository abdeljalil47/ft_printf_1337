FUNC = ft_putnbr_base.c \
       ft_print_unsigned.c \
       ft_single_print.c \
       ft_str_print.c \
       ft_printf.c

CC    = gcc
CFLAGS = -Wall -Wextra -Werror
LIB   = libft/*.o
ARRCS = ar -rcs
NAME  = libftprintf.a
OBJS  = $(FUNC:.c=.o)

$(NAME): $(OBJS)
	cd libft && $(MAKE)
	$(ARRCS) $@ $(OBJS) $(LIB)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f ${NAME}

.re: fclean all

.PHONY: all clean fclean re
