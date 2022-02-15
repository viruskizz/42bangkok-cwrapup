FLAGS = -Wall -Wextra -Werror
TARGET = main.c
NAME = a.out

$(NAME): $(TARGET)
	@gcc $(FLAGS) -c ft_*.c
	@ar rc libft.a ft_*.o
	@rm ft_*.o
	@gcc $(FLAGS) $(TARGET) -L . -lft 
	@./$(NAME)
	
.PHONY: all re clean fclean

all: $(NAME)

clean:
	@-rm main.o

fclean: clean
	@rm libft.a
	@rm -f $(NAME)
	@echo "clean"

re: fclean all