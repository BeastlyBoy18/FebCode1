#include <iostream>
using namespace std;
int main() {
	char choice;
	cout << "What kind of cookie would you like? C for Chocolate Chip, S for Sugar Cookie, P for Peanut Butter !" << endl;
	cin >> choice;
	switch (choice) {
	case 'C':
		cout << "HERES Ya Chocolate Chip Cookies!" << endl;
		break;

	case 'S':
		cout << "Heres You sugar cookie" << endl;
		break;

	case 'P':
		cout << "heres ya Peanut Butter cookie" << endl;
	}



}