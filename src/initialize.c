/*
** EPITECH PROJECT, 2018
** initialize.c
** File description:
** Function that initialize each vector of each object
*/

#include "../include/include.h"

void initialize(object* obj, int nb)
{
	obj->vector.x = nb * 640;
	obj->vector.y = 420;
	obj->x = nb * 640;
	obj->y = 420;
}

void initialize_sky(object* obj, int nb)
{
	obj->vector.x = nb * 799;
	obj->vector.y = 0;
	obj->x = nb * 799;
	obj->y = 0;
}

void initialize_all(object* obj, object* obj2, object* obj3, object* obj4)
{
	initialize(obj, 0);
	initialize(obj2, 1);
	initialize(obj3, 2);
	initialize(obj4, 3);
}

void initialize_sky_all(object* obj, object* obj2, object* obj3, object* obj4)
{
	initialize_sky(obj, 0);
	initialize_sky(obj2, 1);
	initialize_sky(obj3, 2);
	initialize_sky(obj4, 3);
}

void initializer(sky skies, ground grounds, vege vegies, Time *time)
{
	initialize_sky_all(skies.sky, skies.sky2, skies.sky3, skies.sky4);
	initialize_all(grounds.ground, grounds.ground2, grounds.ground3, grounds.ground4);
	initialize_all(vegies.vege, vegies.vege2, vegies.vege3, vegies.vege4);
	time->clock = sfClock_create();
}
