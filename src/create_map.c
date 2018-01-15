/*
** EPITECH PROJECT, 2018
** create_map.c
** File description:
** Function that calls create_object for the map
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void create_map(World *world)
{
	sfVector2f vector;
	sfVector2f normal;

	set_vectors(&vector, &normal);
	world->skies.back = create_object("./sprites/Sunset.jpg", normal);
	create_skies("./sprites/Stars.png", normal, &world->skies);
	create_grounds("./sprites/Ground.png", vector, &world->grounds);
	create_vegies("./sprites/Vegetation.png", vector, &world->vegies);
}
