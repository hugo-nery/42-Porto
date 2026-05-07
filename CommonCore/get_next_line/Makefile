NAME = 

HEADER = get_next_line.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=n

AR = ar rcs

RM = rm -f

FILES = get_next_line.c \
        get_next_line_utils.c 

OBJS = $(FILES:.c=.o)

all: $(NAME)

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