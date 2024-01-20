#include <stdio.h>

int main() {
	int state = 10;
	int max_state = 10;
	printf("C language is %d out of %d.\n", state, max_state);
	state = 'a';
	printf("Error fixed!\n");
	printf("C language is %d out of %d.\n", state, max_state);
}
