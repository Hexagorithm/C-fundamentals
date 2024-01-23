#include <stdio.h>
#include <string.h>

int main() {
	printf("This program mutates the string you give it in mysterious ways...\n");
	
	printf("Input a string: ");
	char string[20]; 
	fgets(string, sizeof(string), stdin);
	string[strlen(string) - 1] = 0;

	printf("Mutating!\n");
	char mstring[strlen(string)];
	strcpy(mstring,string);
	mstring[0] = 'X';
	
	printf("The string mutated!\n");
	printf("[%s] ---> [%s]\n",string,mstring);

	return 0;
}
