#include <stdio.h>
#include <string.h>

typedef struct File {
	int bytelength;
	char name[20];
	char type[3];
}file;

int main() {
	file file;
	file.bytelength = 23;
	strcpy(file.name, "to-do");
	strcpy(file.type,"TXT");
	printf("The file of name: %s and of length: %d is of type: %s\n",file.name, file.bytelength, file.type);
	return 0;
}
