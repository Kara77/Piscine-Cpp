##
## EPITECH PROJECT, 2017
## makefile
## File description:
## Makefile Main
##

SRCS	=	srcs

SRC	=	main.cpp				\
		src/SFML.cpp			

OBJ	=	$(SRC:.cpp=.o)

NAME	=	test

CFLAGS	+=	-Wall -Wextra -Werror

LDFLAGS	+=	-lsfml-audio		\
		-lsfml-graphics		\
		-lsfml-window		\
		-lsfml-system

CC 	= 	g++

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		@rm -f $(OBJ)

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:		all re clean fclean
