NAME = libft.a
SRC = $(wildcard ./*.c)
OBJ = $(SRC:.c=.o)

all:	$(OBJ) $(NAME)

%.o:	%.c
	gcc -c $<

%.a:
	ar r $(NAME) $(OBJ)

clean:
	rm -f *.o *.out

fclean:	clean
	rm -f *.a

re:	fclean all

