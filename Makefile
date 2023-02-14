##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

SRC	=	sources/lib/my_putchar.c \
		sources/lib/my_putstr.c \
		sources/lib/my_put_nbr.c \
		sources/lib/my_strlen.c \
		sources/lib/my_getnbr.c \
		sources/lib/my_lenght_int.c \
		sources/lib/my_put_spaces.c \
		sources/lib/my_strupcase.c \
		sources/symbol_action.c \
		sources/lib/my_revstr.c \
		sources/lib/my_strlowcase.c \
		sources/lib/my_dec_to_hex.c \
		sources/checkcondition.c \
		sources/define_my_struct.c \
		sources/lib/my_put_nbr_base.c \
		sources/lib/my_put_nbr_uns.c \
		sources/lib/troncate.c \
		sources/lib/put_int_space.c \
		sources/my_printf.c

SRC_TESTS = tests/test_myprintf.c

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

unit_tests: re
	gcc -o unit_tests $(SRC) $(SRC_TESTS) -L -lmy --coverage -lcriterion

tests_run: unit_tests
	-./unit_tests
	rm unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/
clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(OBJ)
	rm -f a.out

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re: fclean all