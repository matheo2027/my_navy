##
## EPITECH PROJECT, 2022
## makefile_lib
## File description:
## Une desc
##

SRC		=	src/error_checking.c	\
			src/flags.c	\
			src/main.c	\
			src/players/both.c	\
			src/players/one.c	\
			src/players/two.c	\
			src/game.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	navy

LIB		=	lib/libmy.a

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

CPPFLAGS	=	-I./include -g

$(NAME):	$(LIB) $(OBJ)
		gcc -o $@ $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -ggdb3

all:	$(NAME)

$(LIB):
		make -C lib/my/

clean:
		rm -f $(OBJ)
		rm -f $(NAME)

fclean:	clean
		make fclean -C lib/my/

re:	fclean all
