/*
** EPITECH PROJECT, 2018
** collision.c
** File description:
** Function that manage the collision between luigi and obstacles
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void collision2(object *luigi, Obstacles *obst)
{
	static int last = 0;

	if (obst->mush1->x > 1600)
		last = 1;
	if (obst->mush1->x >= 10 && obst->mush1->x <= 60) {
		if (luigi->y + 50 >= 760 && last == 1) {
			luigi->score = luigi->score + 20;
			last = 0;
		}
	}
}

void collision(object *luigi, Obstacles *obst)
{
	static int last = 0;
	static int last2 = 0;

	if (obst->box->x > 1600)
		last = 1;
	if (obst->box->x >= 10 && obst->box->x <= 50) {
		if (luigi->y + 50 >= 771 && last == 1) {
			luigi->life = luigi->life - 1;
			last = 0;
		}
	}
	if (obst->mush2->x > 1600)
		last2 = 1;
	if (obst->mush2->x >= 10 && obst->mush2->x <= 60) {
		if (luigi->y + 50 >= 760 && last2 == 1) {
			luigi->life = luigi->life - 2;
			last2 = 0;
		}
	}
	collision2(luigi, obst);
}

