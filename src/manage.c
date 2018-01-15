/*
** EPITECH PROJECT, 2018
** manage.c
** File description:
** Function that calls all the manage functions
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void manage(sky skies, ground grounds, vege vegies)
{
	manage_all_s(skies.sky, skies.sky2, skies.sky3, skies.sky4);
	manage_all_g(grounds.ground, grounds.ground2, grounds.ground3, grounds.ground4);
	manage_all_v(vegies.vege, vegies.vege2, vegies.vege3, vegies.vege4);
}

void manage_all(World world, Obstacles *obst)
{
	manage(world.skies, world.grounds, world.vegies);
	manage_obstacles(obst);
}
