/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** Function that calls all the displaying functions
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void display(sfRenderWindow *window, object *luigi, Obstacles *obst, World world)
{
	sfRenderWindow_clear(window, sfWhite);
	sprite_draw_all(window, luigi, obst, world);
	manage_all(world, obst);
	positions_all(world, obst);
	sfRenderWindow_display(window);
}
