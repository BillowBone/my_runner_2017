/*
** EPITECH PROJECT, 2018
** int_string.c
** File description:
** Function that converts an integer into a char *
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/include.h"
#include "../include/game_objects.h"

char *int_string(int nb)
{
	int nb2 = nb;
	int nb3 = nb;
	char *str = malloc(sizeof(char) * 100);
	int i = 0;

	while (nb2 >= 10) {
		nb2 = nb2 % 10;
		str[i] = nb2 + 48;
		i = i + 1;
		nb3 = nb3 / 10;
		nb2 = nb3;
	}
	str[i] = nb2 + 48;
	str[i + 1] = '\0';
	str = my_revstr(str);
	return (str);
}
