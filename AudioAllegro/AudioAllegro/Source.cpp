#include <allegro5\allegro.h>
#include<iostream>
using namespace std;
#include <allegro5\allegro_audio.h>
#include <allegro5\allegro_acodec.h>

int main() {

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_SAMPLE *sample = NULL;

	al_init();
	al_install_audio();
	al_init_acodec_addon();

	al_reserve_samples(1);

	sample = al_load_sample("Sweater.wav");
	if (sample == NULL)
		cout << "didn't load yo"<<endl;

	display = al_create_display(640, 480);

	al_play_sample(sample, 1.0, 1.0, 1, ALLEGRO_PLAYMODE_LOOP, NULL);

	al_rest(10.0);

	al_destroy_display(display);

	al_destroy_sample(sample);
	
}