NAME = libft.a
SRC = $(shell ls *.c)
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Werror -Wextra 

all: $(NAME)
	@echo "Compiling Files .c ...."
$(NAME): obj
	ar rc $(NAME) $(OBJ)
obj:
	cc $(CFLAGS) -c $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all