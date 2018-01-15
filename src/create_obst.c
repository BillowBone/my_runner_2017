/*
** EPITECH PROJECT, 2018
** create_obst.c
** File description:
** Function that initialize each obstacle sprite
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void create_obst(Obstacles *obst)
{
	sfVector2f vector;

	vector.x = 1762;
	vector.y = 771;
	obst->box = create_object("./sprites/Crate.png", vector);
	vector.x = 0.5;
	vector.y = 0.5;
	sfSprite_setScale(obst->box->sprite, vector);
	vector.y = 769;
	vector.x = 1750;
	obst->mush1 = create_object("./sprites/Mushroom_1.png", vector);
	obst->mush2 = create_object("./sprites/Mushroom_2.png", vector);
}
