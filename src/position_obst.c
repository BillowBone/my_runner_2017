/*
** EPITECH PROJECT, 2018
** position_obst.c
** File description:
** Function that moves the obstacles
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

int wait4it(int nb)
{
	if (nb <= 0)
		nb = nb - 1;
	if (nb < -1000)
		return (1);
	return (nb);
}

void manage_obst(Obstacles *obst)
{
	static int nb = 1;

	obst->box->vector.y = 771;
	obst->box->y = 771;
	if (obst->box->vector.x < -77 && nb == 1) {
		obst->box->vector.x = 1762;
		obst->box->x = obst->box->vector.x;
		nb = 2;
	}
	if (obst->box->vector.x < -777 && nb == 2) {
		obst->box->vector.x = 1762;
		obst->box->x = obst->box->vector.x;
		nb = 1;
	} else {
		obst->box->vector.x = obst->box->vector.x - 1.2;
		obst->box->x = obst->box->vector.x;
	}
}

void manage_obst2(Obstacles *obst)
{
	static int nb = 1;

	obst->mush1->vector.y = 769;
	obst->mush1->y = 769;
	if (obst->mush1->vector.x < -50 && nb == 1) {
		obst->mush1->vector.x = 1750;
		obst->mush1->x = obst->mush1->vector.x;
		nb = 2;
	}
	if (obst->mush1->vector.x < -500 && nb == 2) {
		obst->mush1->vector.x = 1750;
		obst->mush1->x = obst->mush1->vector.x;
		nb = 1;
	} else {
		obst->mush1->vector.x = obst->mush1->vector.x - 0.6;
		obst->mush1->x = obst->mush1->vector.x;
	}
}

void manage_obst3(Obstacles *obst)
{
	static int nb = 0;

	obst->mush2->vector.y = 769;
	obst->mush2->y = 769;
	nb = wait4it(nb);
	if (obst->mush2->vector.x < -50 && nb == 1) {
		obst->mush2->vector.x = 1750;
		obst->mush2->x = obst->mush2->vector.x;
		nb = 2;
	}
	if (obst->mush2->vector.x < -500 && nb == 2) {
		obst->mush2->vector.x = 1750;
		obst->mush2->x = obst->mush2->vector.x;
		nb = 1;
	} else {
		obst->mush2->vector.x = obst->mush2->vector.x - 1;
		obst->mush2->x = obst->mush2->vector.x;
	}
}

void manage_obstacles(Obstacles *obst)
{
	manage_obst(obst);
	manage_obst2(obst);
	manage_obst3(obst);
}
