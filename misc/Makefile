NAME = fdf
SRCS = main.c fdf.c draw.c map.c
OBJS = $(SRCS:.c=.o)
LIBS = -L./minilibx -lmlx -framework OpenGL -framework AppKit

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
