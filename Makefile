##
## Makefile for Makefile in 
## 
## Made by Thomas Girolet
## Login   <girole_t@epitech.net>
## 
## Started on  Mon Dec 21 16:50:30 2015 Thomas Girolet
## Last update Mon Dec 21 16:50:38 2015 Thomas Girolet
##

NAME		=	template

LIB		=	-L/home/${USER}/.froot/lib/ -llapin \
			-L/usr/local/lib \
			-lsfml-audio \
			-lsfml-graphics \
			-lsfml-window \
			-lsfml-system \
			-lstdc++ -ldl \
			-lm

SRC		=	my_set_pixel.c

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)
$(NAME):
		gcc *.c $(LIB)
clean:
		rm -f $(OBJ)
fclean:		clean
		rm -f $(NAME)
re:		fclean all
.c.o:
	gcc -c $< -o $@ $(FLAG)

