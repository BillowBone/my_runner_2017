##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	./src/analyse_events.c	\
		./src/create_object.c	\
		./src/main.c		\
		./src/window.c		\
		./src/position.c	\
		./src/initialize.c	\
		./src/position_sky.c	\
		./src/sprite_position.c	\
		./src/sprite_draw.c	\
		./src/create_luigi.c	\
		./src/move_rect.c	\
		./src/clock.c	\
		./src/vectors.c	\
		./src/manage.c	\
		./src/jump.c	\
		./src/create_obst.c	\
		./src/position_obst.c	\
		./src/sprite_position_obst.c	\
		./src/create_map.c	\
		./src/collision.c	\
		./src/destroy.c	\
		./src/sound.c	\
		./src/initialize_mode.c\
		./src/my_revstr.c	\
		./src/int_string.c	\
		./src/display_score.c	\
		./src/my_strlen.c	\
		./src/display_life.c	\
		./src/add_text.c	\
		./src/display_end.c	\
		./src/end_loop.c	\
		./src/display.c	\
		./src/usage.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-Wall -Wextra -pedantic -lc_graph_prog

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) $(OBJ) -o $(NAME) -g

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

