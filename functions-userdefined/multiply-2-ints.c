#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int multiply(int integer1, int integer2) {
	return integer1 * integer2;
}




int usr_get_number() {
	int integer;
	printf("Please input an integer!\n:");
	scanf("\n%d",&integer);
	return integer;
}


int main() {
	printf("This function will compute the 2-integer equasion you give it!\n");
	int integer1 = usr_get_number();
	int integer2 = usr_get_number();
	printf("%d * %d = %d\n", integer1, integer2, integer1 * integer2);
	printf("Exiting...\n");
	return 0;
	

}
