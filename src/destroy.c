/*
** EPITECH PROJECT, 2018
** destroy.c
** File description:
** Function that destroys all the game elements
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void destroy(Sound sound, sfRenderWindow *window)
{
	sfSound_destroy(sound.sound);
	sfSoundBuffer_destroy(sound.buffer);
	sfRenderWindow_destroy(window);
}
