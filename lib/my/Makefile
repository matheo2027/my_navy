##
## EPITECH PROJECT, 2022
## Makefile for lib
## File description:
## lib makefile
##

SRC	=	my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getline.c	\
		my_getnbr.c	\
		my_int_to_str.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_printf.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_put_nbr_interfaces.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strncat.c	\
		my_strcmp.c	\
		my_strncmp.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_strdup.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strstr.c	\
		my_str_to_words_array.c	\
		my_strupcase.c	\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	build

all:	$(NAME) $(OBJ)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	mv libmy.a ../
	cp my.h ../../include
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm ../libmy.a

re:	fclean all

.PHONY	=	all re fclean clean
