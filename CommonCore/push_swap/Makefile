NAME = push_swap
HEADER = push_swap.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

MAIN_FILE = push_swap.c

FILES = sources/mini_lib/ft_abs.c \
		sources/mini_lib/ft_atoi.c \
		sources/mini_lib/ft_isdigit.c \
		sources/mini_lib/ft_putnbr_fd.c \
		sources/mini_lib/ft_putstr_fd.c \
		sources/mini_lib/ft_split.c \
		sources/mini_lib/ft_sqrt_prox.c \
		sources/mini_lib/ft_strcmp.c \
		sources/mini_lib/ft_strlcpy.c \
		sources/ops/push.c \
		sources/ops/reverse_rotate.c \
		sources/ops/rotate.c \
		sources/ops/swap.c \
		sources/turk_utils/target_turk.c \
		sources/turk_utils/utils_turk.c \
		sources/ft_strategy_selector.c \
		sources/utils_stack.c \
		sources/parsing.c \
		sources/benchmark.c \
		sources/ft_compute_disorder.c \
		ft_smallsort.c \
		ft_bucketsort.c \
		ft_turksort.c \
		ft_radixsort.c


OBJS =	$(FILES:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS) $(MAIN_FILE)
		$(CC) $(CFLAGS) $(MAIN_FILE) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		$(RM) ./a.out

re: fclean all

.PHONY: all clean fclean re
