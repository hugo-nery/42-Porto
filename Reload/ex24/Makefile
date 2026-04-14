NAME = libft.a

SRC_DIR     = srcs/
INC_DIR     = includes/

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I $(INC_DIR)
AR          = ar rcs
RM          = rm -f

FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(SRC_DIR), $(FILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re