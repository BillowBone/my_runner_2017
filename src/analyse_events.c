/*
** EPITECH PROJECT, 2017
** analyse_events.c
** File description:
** analyse_events.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"

void analyse_events(sfRenderWindow *window, sfEvent event, int *jump, object* luigi)
{
	if (event.type == sfEvtClosed) {
		close_window(window);
	}
	if (sfKeyboard_isKeyPressed(sfKeySpace) && luigi->y == 760)
		*jump = 1;
}

void analyse_loop(sfRenderWindow *window, sfEvent event, int *jump, object *luigi)
{
	while (sfRenderWindow_pollEvent(window, &event))
		analyse_events(window, event, jump, luigi);
}
