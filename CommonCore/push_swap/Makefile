NAME = ps_comb.a
HEADER = push_swap.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -M
RM = rm -rf

# Paths to sub-libraries
LIBFT = libft/libft.a
PRINTF = ft_printf/ft_printf.a

FILES = push_swap.c

OBJS =	$(FILES:.c=.o)

all:	$(NAME)

# Compile sub-libraries and merge everything (including push_swap.o) into lib_final.a
$(NAME): $(OBJS) make_subs 
		@echo "create $(NAME)" > merge.mri
		@echo "addlib $(LIBFT)" >> merge.mri
		@echo "addlib $(PRINTF)" >> merge.mri
		@echo "addmod $(OBJS)" >> merge.mri
		@echo "save" >> merge.mri
		@echo "end" >> merge.mri
		$(AR) < merge.mri
		$(RM) merge.mri

# Helper rule to force 'make' inside the sub-directories
make_subs:
		$(MAKE) -C libft
		$(MAKE) -C ft_printf

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(MAKE) -C libft clean
		$(MAKE) -C ft_printf clean
		$(RM) $(OBJS)

fclean: clean
		$(MAKE) -C libft fclean
		$(MAKE) -C ft_printf fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re make_subs
