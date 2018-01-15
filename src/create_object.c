/*
** EPITECH PROJECT, 2017
** create_object.c
** File description:
** Functiont that initialize an object for my_runner
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "../include/game_objects.h"
#include "../include/include.h"

struct object *create_object(const char *path, sfVector2f pos)
{
	object* obj = malloc(sizeof(object));

	obj->texture = sfTexture_createFromFile(path, NULL);
	obj->sprite = sfSprite_create();
	sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
	sfSprite_setPosition(obj->sprite, pos);
	obj->x = pos.x;
	obj->y = pos.y;
	return (obj);
}

void create_skies(const char *path, sfVector2f pos, sky* skies)
{
	skies->sky = create_object(path, pos);
	pos.x = 799;
	skies->sky2 = create_object(path, pos);
	pos.x = pos.x + 799;
	skies->sky3 = create_object(path, pos);
	pos.x = pos.x + 799;
	skies->sky4 = create_object(path, pos);
}

void create_grounds(const char *path, sfVector2f pos, ground* grounds)
{
	grounds->ground = create_object(path, pos);
	pos.x = 640;
	grounds->ground2 = create_object(path, pos);
	pos.x = pos.x + 640;
	grounds->ground3 = create_object(path, pos);
	pos.x = pos.x + 640;
	grounds->ground4 = create_object(path, pos);
}

void create_vegies(const char *path, sfVector2f pos, vege* vegies)
{
	vegies->vege = create_object(path, pos);
	pos.x = 640;
	vegies->vege2 = create_object(path, pos);
	pos.x = pos.x + 640;
	vegies->vege3 = create_object(path, pos);
	pos.x = pos.x + 640;
	vegies->vege4 = create_object(path, pos);
}
