NAME = libft.a
SRC = $(wildcard ./*.c)
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all:	$(NAME) 

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o *.out

fclean:	clean
	rm -f *.a

re:	fclean all

