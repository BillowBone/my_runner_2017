/*
** EPITECH PROJECT, 2018
** display_life.c
** File description:
** Function that displays the number of lives
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void display_life(sfRenderWindow* window, int life, sfText *text, sfFont *font)
{
	sfVector2f pos = {100, 50};
	char *my_life = add_life(int_string(life));
	int nb = 30;

	sfText_setFont(text, font);
	sfText_setString(text, my_life);
	sfText_setCharacterSize(text, nb);
	sfText_setColor(text, sfWhite);
	sfText_setPosition(text, pos);
	sfRenderWindow_drawText(window, text, NULL);
}
