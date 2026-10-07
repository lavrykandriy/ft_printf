NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Werror -Wextra
SRCS    = ft_printf.c ft_putchar_len.c ft_putstr_len.c \
          ft_putnbr_len.c ft_puthex_len.c ft_putuint_len.c \
	  ft_putptr_len.c

OBJS    =$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
