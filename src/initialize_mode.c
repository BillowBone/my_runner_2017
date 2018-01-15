/*
** EPITECH PROJECT, 2018
** initialize_mode.c
** File description:
** Function that initialize the mode of my window
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void init_mode(sfVideoMode *mode)
{
	mode->width = 1800;
	mode->height = 900;
	mode->bitsPerPixel = 32;
}

void init_mode_sound(sfVideoMode *mode, Sound *sound, World *world, Obstacles *obst)
{
	init_mode(mode);
	create_sound(sound);
	create_map(world);
	create_obst(obst);
}
