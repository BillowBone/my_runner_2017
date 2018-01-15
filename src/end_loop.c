/*
** EPITECH PROJECT, 2018
** end_loop.c
** File description:
** Function that contains my end loop
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void end_loop(Window my_win, object *luigi)
{
	while (sfRenderWindow_isOpen(my_win.window)
	&& luigi->life <= 0 && luigi->infinity == 1) {
		analyse_loop(my_win.window, my_win.event, &luigi->jump, luigi);
		sfRenderWindow_clear(my_win.window, sfBlack);
		display_end(my_win.window, luigi, luigi->text, luigi->font);
		sfRenderWindow_display(my_win.window);
	}
	while (sfRenderWindow_isOpen(my_win.window)
	&& (luigi->life <= 0 || luigi->score > 500) && luigi->infinity != 1) {
		analyse_loop(my_win.window, my_win.event, &luigi->jump, luigi);
		sfRenderWindow_clear(my_win.window, sfBlack);
		display_end(my_win.window, luigi, luigi->text, luigi->font);
		sfRenderWindow_display(my_win.window);
	}
}
