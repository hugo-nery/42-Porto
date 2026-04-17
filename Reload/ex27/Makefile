NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_display_file.c
OBJS = $(FILES:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re