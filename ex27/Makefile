NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c *.c
	gcc $(FLAGS) -o $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all
