NAME = fdf

SRCS =	fdf_utils.c\
		fdf.c\
		ft_close.c\
		ft_isometric.c\
		ft_matrix.c\
		ft_parse_map.c\
		get_next_line_utils.c\
		get_next_line.c\
		main.c\

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS = -lmlx -lXext -lX11 -Wall -Wextra -Werror
#CFLAGS=-I/opt/X11/include 
#FLAGS =  -L. -lmlx -framework OpenGL -framework AppKit -Wall -Wextra -Werror
#remove only needed for macos

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
#PHONY simular alguma coisa -TODO - ver o que é