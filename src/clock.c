/*
** EPITECH PROJECT, 2018
** clock.c
** File description:
** Function that calls move_rect and restart the clock
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void manage_clock(Time *time, object *luigi, int *jump, Obstacles *obst)
{
	static int score = 0;

	if (time->seconds > 0.08) {
		if (score == 4) {
			luigi->score = luigi->score + 1;
			score = 0;
		}
		if (score != 4)
			score = score + 1;
		collision(luigi, obst);
		move_rect(&luigi->rect, jump);
		sfSprite_setTextureRect(luigi->sprite, luigi->rect);
		jumping(luigi, jump);
		sfClock_restart(time->clock);
		time->seconds = 0.0;
	}
}
