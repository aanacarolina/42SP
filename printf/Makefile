NAME = libftprintf.a

SRCS =  ft_printf.c\
		printf_utils.c\
		printf.h

INCLUDE = .

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS = -Wall, -Wextra and -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 

$(OBJS) : $(SRCS) 
	cc $(FLAGS) -c $(SRCS) -I $(INCLUDE)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
	
