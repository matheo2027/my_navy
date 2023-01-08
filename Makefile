##
## EPITECH PROJECT, 2023
## B-PSU-100-BDX-1-1-navy-matheo.piques
## File description:
## Makefile
##

SRC		=	lib/my_putstr.c	\
			lib/my_putchar.c	\
			src/main.c	\
			src/flags.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	navy

CPPFLAGS	=	-I./include

$(NAME):	$(OBJ)
		gcc -o $@ $(OBJ) $(CPPFLAGS) -ggdb3

all:	$(NAME)

clean:
		rm -f $(OBJ)
		rm -f $(NAME)

fclean: clean

re:     fclean all

.PHONY: all clean fclean re
