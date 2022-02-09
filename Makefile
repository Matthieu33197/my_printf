##
## EPITECH PROJECT, 2019
## make
## File description:
## files
##

SRC	=	lib/my/my_putchar.c			\
		lib/my/my_print_binary.c		\
		lib/my/my_intlen.c			\
		lib/my/my_print_octal.c			\
		lib/my/my_print_adress.c		\
		lib/my/my_hexa_min.c			\
		lib/my/my_print_oktal.c			\
		lib/my/my_print_hexa_maj.c		\
		lib/my/my_print_hexa_min.c		\
		lib/my/my_evil_str.c			\
		lib/my/my_strcat.c			\
		lib/my/my_printf.c			\
		lib/my/my_strcpy.c			\
		lib/my/my_put_nbr_usigned.c		\
		lib/my/my_put_nbr.c			\
		lib/my/my_putstr.c			\
		lib/my/my_revstr.c			\
		lib/my/my_strlen.c			\
		lib/my/my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) lib/
	cp $(NAME) lib/my/
	mkdir -p include
	cp lib/my/my.h  include/

re:	fclean all

clean:
		rm  lib/my/*.o

fclean:		clean
		rm $(NAME)
		rm lib/$(NAME)
		rm lib/my/$(NAME)
