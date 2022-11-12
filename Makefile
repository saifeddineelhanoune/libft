NAME = libft.a
SRC = $(shell ls ft_*.c | grep -v "bonus.c")
BONUSSRC = $(shell ls ft_*_bonus.c)
OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)
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
	@echo "Binary files .o are cleaned...."
	rm -f $(NAME)
re: fclean all