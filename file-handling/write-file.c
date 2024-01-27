#include <stdio.h>

int main() {
	FILE* fpointer = fopen("new-file.txt","w");
	printf("In order to write something to a file, we use the fputs() function.\n");
	fputs("Suck a dick, suck a dick, suck a motherfuken dick.\n Suck a dick, suck a huge or small dick!",fpointer);
	fputs("\nFuck you dude!",fpointer);
	fclose(fpointer);
	return 0;
}
