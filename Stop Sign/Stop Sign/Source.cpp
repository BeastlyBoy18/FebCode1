#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

int main() {


	al_init();
	al_init_primitives_addon();
	al_init_font_addon();

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_FONT *font = al_create_builtin_font();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(10, 50, 70));

	al_draw_filled_triangle(320,400, 150, 120, 500, 120, al_map_rgb(250,220,0)); // Float x1 y1:Bottom or Top //x2 y2:Left // x3 y3: Right

	al_draw_text(font, al_map_rgb(100, 100, 100), 320, 220,ALLEGRO_ALIGN_CENTER, "YIELD");

	al_flip_display();

	al_rest(20.0);

}
