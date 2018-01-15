/*
** EPITECH PROJECT, 2018
** jump.c
** File description:
** Function that manage the jump
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void jumping(object* luigi, int *jump)
{
	sfVector2f vect;

	vect.x = luigi->x;
	vect.y = luigi->y;
	if (*jump == 1 && vect.y > 632) {
		vect.y = luigi->y - 16;
		luigi->y = luigi->y - 16;
		sfSprite_setPosition(luigi->sprite, vect);
		if (luigi->y <= 632)
			*jump = 0;
	}
	if (*jump == 0 && luigi->y < 760) {
		vect.y = luigi->y + 16;
		luigi->y = luigi->y + 16;
		sfSprite_setPosition(luigi->sprite, vect);
	}
}
