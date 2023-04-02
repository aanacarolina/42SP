#targets 

NAME = fdf

LIBS_DIR = ./libs/

LIBFT_DIR = $(LIBS_DIR)libft/

MLX_DIR = $(LIBS_DIR)minilibx/

SRCS =	./src/main.c\
		./src/bresenham.c\
		./src/create_map.c\
		./src/create_draw.c\
		./src/isometric.c\
		./src/parse_map_utils.c\
		./src/utils.c\
		./src/window.c\
		$(LIBS_DIR)gnl/get_next_line_utils.c\
		$(LIBS_DIR)gnl/get_next_line.c

INC =	./include/fdf.h

LIBS =	$(LIBFT_DIR)libft.a\
		$(MLX_DIR)libmlx.a

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS_MLX = -lmlx -lXext -lX11 
#FLAGS = -Wall -Wextra -Werror -lm
FLAGS = -lm

#recipes

all : $(NAME)

$(NAME) : $(LIBS) $(OBJS)
	cc $(OBJS) $(LIBS) $(FLAGS) $(FLAGS_MLX) -o $(NAME)

#$(OBJS) : $(SRCS) 
#	cc $(FLAGS) -c $(SRCS) 

#valgrind --show-leak-kinds=all --leak-check=full ./fdf ./test_maps/42.fdf

%.o : %.c 
	cc $(FLAGS) -c $< -o $@  

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(OBJS) $(NAME)

re : fclean all

$(LIBS) :
	make -C $(LIBFT_DIR)
	make -C $(MLX_DIR)

.PHONY : clean fclean re all $(NAME)

# = variavel, atribuição
# Target = nome regra : dependencia - opcional
# Recipe = o que vai ser executado qdo e se a dependencia for encontrar
#PHONY ignora arquivos de mesmo nome na pasta, priorizando a regra do make
#-o output