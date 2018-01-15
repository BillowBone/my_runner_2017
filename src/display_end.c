/*
** EPITECH PROJECT, 2018
** display_end.c
** File description:
** Function that displays the last output on the screen
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void display_end(sfRenderWindow* window, object *luigi, sfText *text, sfFont *font)
{
	char *win = "      You won !\n Your score is: ";
	char *lose = "      You losed !\nYour score is: ";
	char *scr;
	sfVector2f pos = {400, 300};
	int nb = 100;

	sfText_setFont(text, font);
	if (luigi->score >= 500 && luigi->infinity != 1) {
		scr = add_score2(win, luigi->score);
		sfText_setString(text, scr);
	} else {
		scr = add_score2(lose, luigi->score);
		sfText_setString(text, scr);
	}
	sfText_setCharacterSize(text, nb);
	sfText_setColor(text, sfWhite);
	sfText_setPosition(text, pos);
	sfRenderWindow_drawText(window, text, NULL);
}
