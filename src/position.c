/*
** EPITECH PROJECT, 2018
** position.c
** File description:
** Function that actualize the position of each sprite
*/

#include "../include/game_objects.h"
#include "../include/include.h"

void manage_ground(object *obj)
{
	if (obj->x < -640) {
		obj->x = obj->x + 2559;
		obj->vector.x = obj->vector.x + 2559;
	} else {
		obj->x = obj->x - 0.6;
		obj->vector.x = obj->vector.x - 0.6;
	}
}

void manage_vege(object *obj)
{
	if (obj->x < -640) {
		obj->x = obj->x + 2559;
		obj->vector.x = obj->vector.x + 2559;
	} else {
		obj->x = obj->x - 0.35;
		obj->vector.x = obj->vector.x - 0.35;
	}
}

void manage_sky(object *obj)
{
	if (obj->x < -800) {
		obj->x = obj->x + 3199;
		obj->vector.x = obj->vector.x + 3199;
	} else {
		obj->x = obj->x - 0.2;
		obj->vector.x = obj->vector.x - 0.2;
	}
}

void manage_all_g(object *obj, object* obj2, object* obj3, object* obj4)
{
	manage_ground(obj);
	manage_ground(obj2);
	manage_ground(obj3);
	manage_ground(obj4);
}

void manage_all_v(object *obj, object* obj2, object* obj3, object* obj4)
{
	manage_vege(obj);
	manage_vege(obj2);
	manage_vege(obj3);
	manage_vege(obj4);
}
