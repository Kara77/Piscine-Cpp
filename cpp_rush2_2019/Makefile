##
## EPITECH PROJECT, 2019
## Rush2
## File description:
## Makefile
##

CXX		=		g++

NAME	=		test

SRC		=		Object.cpp\
				Box.cpp\
				Toy.cpp\
				LittlePony.cpp\
				Wrap.cpp\
				Teddy.cpp\
				GiftPaper.cpp\
				test_criterion.cpp

OBJ		=		$(SRC:.cpp=.o)

CXXFLAGS+=		-Wall -Wextra -Werror -Iinclude

RM		=		rm -f

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) -o $(NAME) $(OBJ) -lcriterion

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
