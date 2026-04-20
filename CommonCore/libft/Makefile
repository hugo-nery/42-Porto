NAME = run_libft

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I .

FUNC_DIR = ./functions/

FILES = main.c $(wildcard $(FUNC_DIR)*.c)
OBJS = $(FILES:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
# 		ar rcs $(NAME) $(OBJS)

%.o:%.c libft.h
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re