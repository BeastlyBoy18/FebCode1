#include <iostream>
using namespace std;
#include <Windows.h>
void Annoying();
int main(){
	Annoying();


}
void Annoying() {
	cout << "Press Ok for an annoying message" << endl;
	MessageBox(NULL, "OK", "Ugly", NULL);
	Beep(500, 500);
	Beep(500, 500);
	Beep(500, 500);
	Beep(500, 500);
	Beep(500, 500);
	cout << "Haha You're Ugly" << endl;
	system("Color 1A");


}