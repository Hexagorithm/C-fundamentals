#include <stdio.h>
#include <string.h>
int main() {
	printf("Lets save 2 inputs from the keyboard into one place, what could go wrong?\n");
	char string1[20];
	char string2[20];
	printf("Please input the first string!:");
	fgets(string1, sizeof(string1),stdin);
	string1[strlen(string1) -1] = 0;

	printf("Please input the second string!:");
	fgets(string2, sizeof(string2),stdin);
	string2[strlen(string2) -1] = 0;

	strcat(string1,string2);
	printf("Inputs saved to file.\n");
	for (int i = 0; i < strlen(string1); i = i + 2) {
		string1[i] = 'X';
	}
	printf("Oh no! The file was corrupted!\n");
	printf("Contents of file: %s\n",string1);




	return 0;
}
