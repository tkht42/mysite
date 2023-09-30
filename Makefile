NAME = do-op
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = add.c ft_atoi.c divide.c substract.c multiply.c modulo.c ft_str_is_numeric.c ft_putnbr.c ft_strlen.c main.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -I./ft.h -o $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -I./ft.h -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
