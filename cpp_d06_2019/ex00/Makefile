##
## EPITECH PROJECT, 2019
## Day03
## File description:
## Makefile
##

SRC	=	my_cat.cpp	

EXEC	=	my_cat

OBJ	=	$(SRC:.cpp=.o)

all:
	g++ -o $(EXEC) $(SRC)

clean:
	rm -rf $(OBJ)

fclean:	clean

re:	fclean all
