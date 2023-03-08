NAME = fdf

SRCS =	fdf.c\
		ft_close.c\
		main.c\
		ft_parse\

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS = -lmlx -lXext -lX11 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)

	cc $(OBJS) $(FLAGS) -o $(NAME)	

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean re all $(NAME)


# = variavel, atribuição
#nome regra: dependencia - opcional
# o que vai ser executado qdo e se a dependencia for encontrar