##
## EPITECH PROJECT, 2022
## makefile_lib
## File description:
## Une desc
##

SRC		=	src/error/error_handling.c	\
			src/flags.c	\
			src/main.c	\
			src/players/both.c	\
			src/players/one.c	\
			src/players/two.c	\
			src/game.c	\
			src/map/print_map_start.c	\
			src/error/error_map.c

OBJ		=	$(SRC:.c=.o)

NAME	=	navy

LIB		=	lib/libmy.a

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

CPPFLAGS	=	-I./include -g

$(NAME):	$(LIB) $(OBJ)
		gcc -o $@ $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -ggdb3

all:	$(NAME) $(LIB)

$(LIB):
		make -C lib/my/

clean:
		rm -f $(OBJ)


fclean:	clean
		rm -f $(NAME)
		make fclean -C lib/my/

re:	fclean all

.PHONY: all clean fclean re
