/*
** EPITECH PROJECT, 2017
** include.h
** File description:
** include.h
*/

#ifndef _MY_H_
#define _MY_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include "game_objects.h"

void analyse_events(sfRenderWindow *window, sfEvent event, int *jump, object *luigi);
struct object *create_object(const char *path, sfVector2f pos);
void close_window(sfRenderWindow *window);
void manage_ground(object* obj);
void manage_vege(object* obj);
void manage_sky(object* obj);
void manage_all_g(object *obj, object* obj2, object* obj3, object* obj4);
void manage_all_v(object* obj, object* obj2, object* obj3, object* obj4);
void manage_all_s(object* obj, object* obj2, object* obj3, object *obj4);
void initialize(object* obj, int nb);
void initialize_sky(object* obj, int nb);
void initialize_all(object* obj, object* obj2, object* obj3, object* obj4);
void initialize_sky_all(object* obj, object* obj2, object* obj3, object* obj4);
void initializer(sky skies, ground grounds, vege vegies, Time *time);
void sprite_sky(object *obj, object* obj2, object* obj3, object* obj4);
void sprite_vege(object *obj, object* obj2, object* obj3, object* obj4);
void sprite_gr(object* obj, object* obj2, object* obj3, object* obj4);
void sprite_draw(sfRenderWindow* window, sky skies, ground grounds, vege vegies);
void sprite_draw2(sfRenderWindow* window, object *luigi, Obstacles *obst);
void sprite_draw_all(sfRenderWindow* window, object *luigi, Obstacles *obst, World world);
void positions(sky skies, ground grounds, vege vegies);
void create_skies(const char *path, sfVector2f pos, sky* skies);
void create_grounds(const char *path, sfVector2f pos, ground* grounds);
void create_vegies(const char *path, sfVector2f pos, vege* vegies);
struct object* create_luigi(const char *path);
int move_rect(sfIntRect *rect, int *jump);
void manage_clock(Time *time, object *luigi, int *jump, Obstacles *obst);
void set_vectors(sfVector2f *vector, sfVector2f *normal);
void manage(sky skies, ground grounds, vege vegies);
void jumping(object* luigi, int *jump);
void create_obst(Obstacles *obst);
void manage_obst(Obstacles *obst);
void manage_obst2(Obstacles *obst);
void manage_obst3(Obstacles *obst);
void manage_obstacles(Obstacles *obst);
int wait4it(int nb);
void positions_obst(Obstacles *obst);
void create_map(World *world);
void collision(object *luigi, Obstacles *obst);
void collision2(object *luigi, Obstacles *obst);
void destroy(Sound sound, sfRenderWindow *window);
void positions_all(World world, Obstacles *obst);
void manage_all(World world, Obstacles *obst);
void create_sound(Sound *sound);
void init_mode_sound(sfVideoMode *mode, Sound *sound, World *world, Obstacles *obst);
char *my_revstr(char *str);
char *int_string(int nb);
void display_score(sfRenderWindow *window, int score, sfText *text, sfFont *font);
int my_strlen(char *str);
void display_life(sfRenderWindow *window, int life, sfText *text, sfFont *font);
void display_end(sfRenderWindow *window, object *luigi, sfText *text, sfFont *font);
char *add_score(char *str);
char *add_score2(char *str, int score);
char *add_life(char *str);
void analyse_loop(sfRenderWindow *window, sfEvent event, int *jump, object *luigi);
void end_loop(Window my_win, object *luigi);
void display(sfRenderWindow *window, object *luigi, Obstacles *obst, World world);
int usage(int argc, char *argv[], object *luigi);
void print_usage(void);
#endif /* _MY_H_ */
