/*
** EPITECH PROJECT, 2018
** add_text.c
** File description:
** Function that adds score: & life: in front of score & life on the screen
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "../include/include.h"
#include "../include/game_objects.h"

char *add_score(char *str)
{
	char *score = malloc(sizeof(char) * 100);
	int i = 0;
	int j = 7;

	score[0] = 'S';
	score[1] = 'c';
	score[2] = 'o';
	score[3] = 'r';
	score[4] = 'e';
	score[5] = ':';
	score[6] = ' ';
	while (str[i] != '\0') {
		score[j] = str[i];
		j = j + 1;
		i = i + 1;
	}
	score[j] = '\0';
	return (score);
}

char *add_life(char *str)
{
	char *life = malloc(sizeof(char) * 100);
	int i = 0;
	int j = 7;

	life[0] = 'L';
	life[1] = 'i';
	life[2] = 'v';
	life[3] = 'e';
	life[4] = 's';
	life[5] = ':';
	life[6] = ' ';
	while (str[i] != '\0') {
		life[j] = str[i];
		i = i + 1;
		j = j + 1;
	}
	life[j] = '\0';
	return (life);
}

char *add_score2(char *str, int score)
{
	char *scr = malloc(sizeof(char) * 100);
	char *str2;
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		scr[i] = str[i];
		i = i + 1;
	}
	str2 = int_string(score);
	while (str2[j] != '\0') {
		scr[i] = str2[j];
		i = i + 1;
		j = j + 1;
	}
	scr[i] = '\0';
	return (scr);
}
