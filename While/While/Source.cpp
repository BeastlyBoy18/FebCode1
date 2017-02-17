#include <iostream>
using namespace std;

int main() {
	char input = 'a';
	while (input != 'q') {
		cout << "Would you like a cookie ?" << endl;
		cin >> input;
		if (input == 'y') {
			cout << "here's a cookie!" << endl;
		}
		else if (input == 'n')
			cout << "Fine No Cookie" << endl;
		else
			cout << "that isn't an option dummy" << endl;
	}
}