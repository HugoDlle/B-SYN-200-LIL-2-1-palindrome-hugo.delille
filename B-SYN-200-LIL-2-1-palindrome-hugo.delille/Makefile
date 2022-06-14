##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Histoire de compiler PALINDROME
##

CFLAGS	+=	-I include -W -Wall -Wextra

SRC	=	src/main.c	\
		lib/my/my_putstr.c \
		lib/my/my_putchar.c \
		lib/my/my_put_nbr.c \
		lib/my/my_strlen.c \
		lib/my/my_revnbr.c \
		lib/my/my_strcmp.c \
		src/helper.c	\
		src/my_get_number.c	\
		src/palindrome.c	\
		src/power.c	\
		src/transform_number.c	\
		src/print_lead_iteration.c	\
		src/flags_gestionning.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

all	:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
		rm -rf $(OBJ)
		rm -rf $(TEST_OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

debug:	CFLAGS += -g
debug:	re