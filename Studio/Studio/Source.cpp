#include <stdio.h>

int main() {
	char stuff[10];
	printf("What can I call you? \n");
	fgets(stuff, 10, stdin);
	printf("Hello, %s!", stuff);

	
}