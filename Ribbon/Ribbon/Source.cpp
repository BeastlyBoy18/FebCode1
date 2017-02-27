#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {

	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();
	display = al_create_display(1000, 1000);

	float Picture[5][5] = { {100,460} , {200,350} , {320,240} ,{ 440,130 },{100,20} };
	al_draw_ribbon(*Picture, sizeof(*Picture), al_map_rgb(150, 150, 150) ,5 ,5);

	al_flip_display();
	al_rest(20.0);

}