NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	@echo "noop"

fclean:
	/bin/rm -f $(NAME)
