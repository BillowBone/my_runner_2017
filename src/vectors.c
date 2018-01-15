/*
** EPITECH PROJECT, 2018
** vectors.c
** File description:
** Function that set the vectors values
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void set_vectors(sfVector2f *vector, sfVector2f *normal)
{
	normal->x = 0;
	normal->y = 0;
	vector->x = 0;
	vector->y = 420;
}
