#targets 

NAME = fdf

LIBS_DIR = ./libs/

LIBFT_DIR = $(LIBS_DIR)libft/

MLX_DIR = $(LIBS_DIR)minilibx/

SRCS =	./src/main.c\
		/src/parse_map_utils.c\
		$(LIBS_DIR)gnl/get_next_line_utils.c\
		$(LIBS_DIR)gnl/get_next_line.c\

INC =	./include/fdf.h

LIBS =	$(LIBFT_DIR)libft.a

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS_MLX = -lmlx -lXext -lX11 
FLAGS = -Wall -Wextra -Werror

#recipes

all : $(NAME)

$(NAME) : $(OBJS) $(LIBS)
	cc $(OBJS) $(FLAGS) $(LIBS) -o $(NAME)
#	cc $(OBJS) $(MLX_DIR) $(FLAGS) -o $(NAME)

#$(OBJS) : $(SRCS) 
#	cc $(FLAGS) -c $(SRCS) 

%.o : %.c 
	cc $(FLAGS) -c $< -o $@  

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(OBJS) $(NAME)

re : fclean all

$(LIBS) :
	$(MAKE) -C $(LIBFT_DIR)
#$(MAKE) -C $(MLX_DIR)

.PHONY : clean fclean re all $(NAME)

# = variavel, atribuição
# Target = nome regra : dependencia - opcional
# Recipe = o que vai ser executado qdo e se a dependencia for encontrar
#PHONY ignora arquivos de mesmo nome na pasta, priorizando a regra do make
#-o output