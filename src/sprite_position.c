/*
** EPITECH PROJECT, 2018
** sprite_position.c
** File description:
** Functions that set the position of my sprites
*/

#include "../include/game_objects.h"

void sprite_sky(object *obj, object* obj2, object* obj3, object* obj4)
{
	sfSprite_setPosition(obj->sprite, obj->vector);
	sfSprite_setPosition(obj2->sprite, obj2->vector);
	sfSprite_setPosition(obj3->sprite, obj3->vector);
	sfSprite_setPosition(obj4->sprite, obj4->vector);
}

void sprite_vege(object* obj, object* obj2, object* obj3, object* obj4)
{
	sfSprite_setPosition(obj->sprite, obj->vector);
	sfSprite_setPosition(obj2->sprite, obj2->vector);
	sfSprite_setPosition(obj3->sprite, obj3->vector);
	sfSprite_setPosition(obj4->sprite, obj4->vector);
}

void sprite_gr(object* obj, object* obj2, object* obj3, object* obj4)
{
	sfSprite_setPosition(obj->sprite, obj->vector);
	sfSprite_setPosition(obj2->sprite, obj2->vector);
	sfSprite_setPosition(obj3->sprite, obj3->vector);
	sfSprite_setPosition(obj4->sprite, obj4->vector);
}

void positions(sky skies, ground grounds, vege vegies)
{
	sprite_sky(skies.sky, skies.sky2, skies.sky3, skies.sky4);
	sprite_vege(vegies.vege, vegies.vege2, vegies.vege3, vegies.vege4);
	sprite_gr(grounds.ground, grounds.ground2, grounds.ground3, grounds.ground4);
}
