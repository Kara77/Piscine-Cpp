##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Rush03
##

SRC				=	Graphic_Window.cpp\
					../step.cpp\
					../martin.cpp\
					../name_and_kernel.cpp\
					../Pncurses.cpp

CPPFLAGS		= 	-Wall -Wextra -Werror

NAME			=	sfml-app

INCLUDE 		= 	-I./SFML-2.5.1/include

LIB				=	SFML-2.5.1/lib

EXPORT_PATH 	= 	export LD_LIBRARY_PATH=${LIB} && ./sfml-app

DEPENDENCIES 	= 	-lncurses -lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):
	g++ -c $(SRC) ${INCLUDE}
	rm *.o
	g++ -o $(NAME) $(SRC) -L./${LIB} ${DEPENDENCIES} $(CPPFLAGS)
	${EXPORT_PATH}

clean:
	rm -f *~
	rm -f *.o
	rm -f *#

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: fclean re all clean
