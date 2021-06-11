##
## EPITECH PROJECT, 2019
## Day03
## File description:
## Makefile
##

SRC	=	append.c	\
		assign.c	\
		at.c		\
		clear.c		\
		compare.c	\
		size.c		\
		my_string.c	\
		copy.c		\
		empty.c		\
		c_str.c		\
		find.c

NAME	=	libstring.a

EXEC	=	a.out

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all