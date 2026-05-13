NAME = ft_printf.a

HEADER = ft_printf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

FILES = ft_printf.c \
        ft_putchr.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putuns.c \
		ft_puthexa.c \
		ft_putptr.c

OBJS = $(FILES:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
