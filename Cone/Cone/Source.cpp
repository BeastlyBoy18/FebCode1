#include <iostream>
using namespace std;

int main() {
	double rad;
	double height;
	double volume;



	cout << "What is the radius of your cone." << endl;
	cin >> rad;
	cout << "what is the height of your cone" << endl;
	cin >> height;

	volume =  3.14 * (rad*rad) * height / 3;

	cout << "The volume of the cone is " << volume << endl;
}