/*
** EPITECH PROJECT, 2018
** sound.c
** File description:
** Function that creates a sound buffer and displays it
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void create_sound(Sound *sound)
{
	sound->buffer = sfSoundBuffer_createFromFile("./sounds/KodakBlack.ogg");
	sound->sound = sfSound_create();
	sfSound_setBuffer(sound->sound, sound->buffer);
	sfSound_play(sound->sound);
}
