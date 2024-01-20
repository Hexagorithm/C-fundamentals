#include <stdio.h>
#include <stdbool.h> //needed library for creating boolean variables

int main() {
	bool var1 = true; // must be true, not True, this is actually a 1
	bool var2 = false; // must be false, not False , this is actually a 0
	printf("Bolean variables need the stdbool.h library to work.\n\
Bolean variables are actually just decimal variables,\n\
that is why they don\'t have their own format specifier.\n");
	printf("So you can display them like this: %d, %d.\n",var1,var2);
	return 0;
}
