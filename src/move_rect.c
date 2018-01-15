/*
** EPITECH PROJECT, 2018
** move_rect.c
** File description:
** Function that moves the rectangle of luigi
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"
#include "../include/game_objects.h"

int move_rect(sfIntRect *rect, int *jump)
{
	if (*jump == 1) {
		rect->left = 450;
		return (0);
	}
	if (*jump == 0 && rect->left == 450) {
		rect->left = 250;
		return (0);
	}
	if (rect->left == 250) {
		rect->left = 350;
		return (0);
	}
	if (rect->left == 300) {
		rect->left = 250;
		return (0);
	}
	if (rect->left == 350) {
		rect->left = 300;
		return (0);
	}
}
