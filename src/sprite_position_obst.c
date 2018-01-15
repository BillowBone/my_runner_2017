/*
** EPITECH PROJECT, 2018
** sprite_position_obst.c
** File description:
** Function that calls setPosition for my obstacles
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void positions_obst(Obstacles *obst)
{
	sfSprite_setPosition(obst->box->sprite, obst->box->vector);
	sfSprite_setPosition(obst->mush1->sprite, obst->mush1->vector);
	sfSprite_setPosition(obst->mush2->sprite, obst->mush2->vector);
}
