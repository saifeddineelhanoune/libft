NAME = libft.a
SRC = $(shell ls ft_*.c)
CC = cc
HEADER = libft.h
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Werror -Wextra 
all: $(NAME) $(HEADER)
	@echo "Compiling Files .c ...."
$(NAME): obj
	ar rc $(NAME) $(OBJ)
obj:
	$(CC) $(CFLAGS) -c $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	@echo "Binary files .o are cleaned...."
	rm -f $(NAME)
re: fclean all