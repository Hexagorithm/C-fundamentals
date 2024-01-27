#include <stdio.h>

int main() {
	FILE* fpointer = fopen("new-file.txt","a");
	fputs("\nCan I put my balls in your jaws?",fpointer);
	fclose(fpointer);
	return 0;
}
