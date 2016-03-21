##
## Makefile for Makefile in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
## 
## Made by menett_a
## Login   <menett_a@epitech.net>
## 
## Started on  Tue Feb  9 16:02:22 2016 menett_a
## Last update Sun Feb 21 23:15:50 2016 menett_a
##

NAME	= allum1

SRC	= ia.c			\
	  main.c		\
	  who_win.c		\
	  ia_smart.c		\
	  the_game.c		\
	  my_error.c		\
	  my_getnbr.c		\
	  my_putstr.c		\
	  get_next_line.c	\

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Werror -pedantic -ansi

RM	= rm -rf

all:	 $(NAME)

$(NAME): $(OBJ)
	 gcc -o $(NAME) $(OBJ)

clean:
	 $(RM) $(OBJ)

fclean:	 clean
	 $(RM) $(NAME)

re:	 fclean all

.PHONY:	 all clean fclean re
