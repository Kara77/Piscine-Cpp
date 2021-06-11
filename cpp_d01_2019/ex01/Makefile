##
## EPITECH PROJECT, 2018
## The Menger Sponge
## File description:
## Makefile
##

SRC	=	main.c		\
		menger.c

NAME	=	menger

OBJ	=	$(SRC:.c=.o)

all:
	gcc $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

re:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	gcc $(SRC) -o $(NAME)
