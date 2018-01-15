/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include "../include/include.h"
#include "../include/game_objects.h"

int main(int argc, char *argv[])
{
	World world;
	object *luigi;
	Obstacles *obst = malloc(sizeof(Obstacles));
	Window my_win;
	Time time;
	Sound sound;

	luigi = create_luigi("./sprites/Luigi.png");
	if (usage(argc, argv, luigi) == 1)
		return (1);
	init_mode_sound(&my_win.mode, &sound, &world, obst);
	my_win.window = sfRenderWindow_create(my_win.mode, "my_runner", sfResize | sfClose, NULL);
	initializer(world.skies, world.grounds, world.vegies, &time);
	if (!my_win.window)
		return (84);
	while (sfRenderWindow_isOpen(my_win.window)) {
		analyse_loop(my_win.window, my_win.event, &luigi->jump, luigi);
		time.time = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time.microseconds / 1000000.0;
		display(my_win.window, luigi, obst, world);
		manage_clock(&time, luigi, &luigi->jump, obst);
		end_loop(my_win, luigi);
	}
	destroy(sound, my_win.window);
}
