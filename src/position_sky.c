/*
** EPITECH PROJECT, 2018
** position_sky.c
** File description:
** Function that manages the sky's position
*/

#include "../include/game_objects.h"
#include "../include/include.h"

void manage_all_s(object* obj, object* obj2, object* obj3, object* obj4)
{
	manage_sky(obj);
	manage_sky(obj2);
	manage_sky(obj3);
	manage_sky(obj4);
}

void positions_all(World world, Obstacles *obst)
{
	positions(world.skies, world.grounds, world.vegies);
	positions_obst(obst);
}
