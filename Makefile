NAME = libftprintf.a

SRCS = 	ft_putaddress.c		ft_puthex.c	 	ft_putnbr.c		\
		ft_putstr.c 		ft_putchar.c	ft_printf.c		
		
OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all