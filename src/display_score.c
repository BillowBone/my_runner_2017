/*
** EPITECH PROJECT, 2018
** display_score.c
** File description:
** Function that displays the player's score
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void display_score(sfRenderWindow* window, int score, sfText *text, sfFont *font)
{
	sfVector2f pos = {1500, 50};
	char *my_score = add_score(int_string(score));
	int nb = 30;

	sfText_setFont(text, font);
	sfText_setString(text, my_score);
	sfText_setCharacterSize(text, nb);
	sfText_setColor(text, sfWhite);
	sfText_setPosition(text, pos);
	sfRenderWindow_drawText(window, text, NULL);
}
