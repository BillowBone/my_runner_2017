/*
** EPITECH PROJECT, 2018
** usage.c
** File description:
** Function that prints the usage
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/include.h"
#include "../include/game_objects.h"

void print_usage(void)
{
	write(1, "Finite runner created with CSFML\n\n", 34);
	write(1, "USAGE\n  ./my_runner\n\n", 21);
	write(1, "OPTIONS\n  -i        ", 20);
	write(1, "launch the game in infinity mode.\n", 34);
	write(1, "  -h        print the usage.\n\n", 30);
	write(1, "USER INTERACTIONS\n  -SPACE_KEY        jump.\n\n", 45);
	write(1, "HOW TO PLAY\n  -You run from the left", 37);
	write(1, " to the right.\n  -Obstacles are coming", 39);
	write(1, " in front of you and you have to jump", 38);
	write(1, " to avoid them.\n  -There is 2 types ", 37);
	write(1, "of obstacles : boxes and orange mushrooms.\n", 43);
	write(1, "  -Boxes makes you lose 1 life and mushrooms", 43);
	write(1, " makes you lose 2 lives, you have 5 lives.\n", 44);
	write(1, "  -Pink mushrooms droped on the floor makes", 43);
	write(1, " you earn +20 score points when you touch them.\n", 48);
	write(1, "  -You need 500 points or more to finish the game", 49);
	write(1, " in normal mode.\n", 17);
	write(1, "  -Unfortunately there is no tile mapping on this", 49);
	write(1, " game so you can't play with your own map :(\n", 45);
}

int usage(int argc, char *argv[], object *luigi)
{
	if (argc < 2)
		return (0);
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		print_usage();
		return (1);
	}
	if (argv[1][0] == '-' && argv[1][1] == 'i') {
		luigi->infinity = 1;
	} else {
		luigi->infinity = 0;
	}
	return (0);
}
