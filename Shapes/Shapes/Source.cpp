#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>

int main() {
	ALLEGRO_DISPLAY *display = NULL;

	al_init();
	al_init_primitives_addon();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(10, 50, 70));
	al_draw_triangle(130.0,230.0,320.0,240.0,200.0,100.0, al_map_rgb(15, 10, 124), 25);
	al_draw_triangle(230.0, 180.0, 220.0, 40.0, 130.0, 100.0, al_map_rgb(45, 140, 124), 5);
	al_draw_triangle(250.0, 30.0, 300.0, 200.0, 100.0, 50.0, al_map_rgb(143, 154, 12), 10);



	al_flip_display();

	al_rest(20.0);




}