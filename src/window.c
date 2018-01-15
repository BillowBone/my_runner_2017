/*
** EPITECH PROJECT, 2017
** window.c
** File description:
** This file contains all functions I need to manage the window interactions
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/include.h"

void close_window(sfRenderWindow *window)
{
	sfRenderWindow_close(window);
}
