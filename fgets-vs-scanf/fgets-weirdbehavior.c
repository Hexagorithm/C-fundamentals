#include <stdio.h>

int main() {
	char array[20];
	printf("Dog");
	fgets(array, sizeof(array),stdout);
	printf("Did I just say: %s",array);
	return 0;
}
