/*
** EPITECH PROJECT, 2017
** game_objects.h
** File description:
** game_objects.h
*/

#ifndef _OBJECTS_H_
#define _OBJECTS_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>

typedef struct object object;
struct object
{
	sfTexture* texture;
	sfSprite* sprite;
	sfVector2f vector;
	sfIntRect rect;
	float x;
	float y;
	int life;
	int jump;
	int score;
	int infinity;
	sfText *text;
	sfFont *font;
};

typedef struct vege vege;
struct vege
{
	object* vege;
	object* vege2;
	object* vege3;
	object* vege4;
};

typedef struct ground ground;
struct ground
{
	object* ground;
	object* ground2;
	object* ground3;
	object* ground4;
};

typedef struct sky sky;
struct sky
{
	object *sky;
	object *sky2;
	object *sky3;
	object *sky4;
	object *back;
};

typedef struct Time Time;
struct Time
{
	sfClock* clock;
	sfTime time;
	float seconds;
};

typedef struct Obstacles Obstacles;
struct Obstacles
{
	object *box;
	object *mush1;
	object *mush2;
};

typedef struct Sound Sound;
struct Sound
{
	sfSoundBuffer *buffer;
	sfSound *sound;
};

typedef struct World World;
struct World
{
	sky skies;
	ground grounds;
	vege vegies;
};

typedef struct Window Window;
struct Window
{
	sfRenderWindow* window;
	sfEvent event;
	sfVideoMode mode;
};
#endif /* _OBJECTS_H_ */
