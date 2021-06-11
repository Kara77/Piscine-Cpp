##
## EPITECH PROJECT, 2019
## Rush3
## File description:
## Makefile cpp
##

NAME	=		MyGKrellm

CXX		=		g++

SRC		=		main.cpp\
				Sfml/sfml.cpp\
				system/system.cpp\
				ncurses/ncurses.cpp

OBJ		=		$(SRC:.cpp=.o)

CPPFLAGS+=		-Wall -Wextra -Werror

LDFLAGS+=		-lsfml-graphics\
				-lsfml-window\
				-lsfml-system\
				-lsfml-audio\
				-lncurses

RM		=		rm -f

# Colors
NO_COLOR=		\x1b[0m
OK_COLOR=		\x1b[32;01m
ERROR_COLOR=	\x1b[31;01m
WARN_COLOR=		\x1b[33;01m
SILENT_COLOR= 	\x1b[30;01m
ALIGN_TAB=	 	\e[25G

all:			$(NAME)

%.o: 			%.cpp
			    @printf "$(SILENT_COLOR)$<$(NO_COLOR)\t"
			    @$(CXX) $(CXXFLAGS) -c $< -o $@
				@printf "$(ALIGN_TAB)$(OK_COLOR)✓$(NO_COLOR)\n"

$(NAME):		$(OBJ)
				@printf "$(OK_COLOR)$(NAME)$(NO_COLOR)"
			    @$(CXX) $(CXXFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)
			    @printf "$(ALIGN_TAB)$(OK_COLOR)Done$(NO_COLOR)\n"

clean:
				$(RM) $(OBJ) *~
				@printf "$(WARN_COLOR)Removed objects$(NO_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "$(ERROR_COLOR)Removed $(NAME)$(NO_COLOR)\n"

re:				fclean all

space:
				@echo

.PHONY:			all clean fclean re space
