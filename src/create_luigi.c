/*
** EPITECH PROJECT, 2018
** create_luigi.c
** File description:
** Function that initialize the player
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/include.h"
#include "../include/game_objects.h"

struct object* create_luigi(const char *path)
{
	object *luigi = malloc(sizeof(object));

	luigi->texture = sfTexture_createFromFile(path, NULL);
	luigi->sprite = sfSprite_create();
	sfSprite_setTexture(luigi->sprite, luigi->texture, sfTrue);
	luigi->font = sfFont_createFromFile("./texts/stocky.ttf");
	luigi->text = sfText_create();
	luigi->life = 5;
	luigi->jump = 0;
	luigi->score = 0;
	luigi->vector.x = 10;
	luigi->vector.y = 760;
	luigi->x = luigi->vector.x;
	luigi->y = luigi->vector.y;
	luigi->rect.top = 100;
	luigi->rect.left = 250;
	luigi->rect.width = 50;
	luigi->rect.height = 50;
	sfSprite_setTextureRect(luigi->sprite, luigi->rect);
	sfSprite_setPosition(luigi->sprite, luigi->vector);
	return (luigi);
}
