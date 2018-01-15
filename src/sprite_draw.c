/*
** EPITECH PROJECT, 2018
** sprite_draw.c
** File description:
** Functions that calls drawSprite function
*/

#include "../include/game_objects.h"
#include "../include/include.h"

void sprite_draw(sfRenderWindow* window, sky skies, ground grounds, vege vegies)
{
	sfRenderWindow_drawSprite(window, skies.back->sprite, NULL);
	sfRenderWindow_drawSprite(window, skies.sky->sprite, NULL);
	sfRenderWindow_drawSprite(window, skies.sky2->sprite, NULL);
	sfRenderWindow_drawSprite(window, skies.sky3->sprite, NULL);
	sfRenderWindow_drawSprite(window, skies.sky4->sprite, NULL);
	sfRenderWindow_drawSprite(window, vegies.vege->sprite, NULL);
	sfRenderWindow_drawSprite(window, vegies.vege2->sprite, NULL);
	sfRenderWindow_drawSprite(window, vegies.vege3->sprite, NULL);
	sfRenderWindow_drawSprite(window, vegies.vege4->sprite, NULL);
	sfRenderWindow_drawSprite(window, grounds.ground->sprite, NULL);
	sfRenderWindow_drawSprite(window, grounds.ground2->sprite, NULL);
	sfRenderWindow_drawSprite(window, grounds.ground3->sprite, NULL);
	sfRenderWindow_drawSprite(window, grounds.ground4->sprite, NULL);
}

void sprite_draw2(sfRenderWindow* window, object *luigi, Obstacles *obst)
{
	sfRenderWindow_drawSprite(window, luigi->sprite, NULL);
	sfRenderWindow_drawSprite(window, obst->box->sprite, NULL);
	sfRenderWindow_drawSprite(window, obst->mush1->sprite, NULL);
	sfRenderWindow_drawSprite(window, obst->mush2->sprite, NULL);
}

void sprite_draw_all(sfRenderWindow *window, object *luigi, Obstacles *obst, World world)
{
	sprite_draw(window, world.skies, world.grounds, world.vegies);
	sprite_draw2(window, luigi, obst);
	display_score(window, luigi->score, luigi->text, luigi->font);
	display_life(window, luigi->life, luigi->text, luigi->font);
}
