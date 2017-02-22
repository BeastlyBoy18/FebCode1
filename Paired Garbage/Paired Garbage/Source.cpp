#include <iostream>
using namespace std;

int main() {
	char choice;
	int x, y, result;


	cout << "Would You like to add + ,subtract -,multiply * and divide /" << endl;
	cin >> choice;
	cout << "what is your first number." << endl;
	cin >> x;
	cout << "what is your second number." << endl;
	cin >> y; 
	switch (choice)
	{
	case '+':
		result = x + y;
		cout << result << endl;
		break;

	case '-':
		result = x - y;
		cout << result << endl;
		break;

	case '*':
		result = x * y;
		cout << result << endl;
		break;

	case '/':
		result = x / y;
		cout << result << endl;
		break;
}









}