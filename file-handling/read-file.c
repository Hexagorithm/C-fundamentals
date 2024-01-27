#include <stdio.h>

int main() {
	printf("In order to work with files, we utilize pointers.\n\n");
	FILE* filepointer;

	printf("The pointer of the file can be accessed using the fopen() command.\n\n");
	filepointer = fopen("file.txt","r"); // open file in read mode
	
	printf("If the file does not exist when trying to fopen it with read mode,\n");
	printf("the fopen() command will return NULL, making the filepointer also NULL\n\n");
	if ( filepointer == NULL) {
		printf("The file does not exist, dumbass!\n");
		return 0;
	}

	printf("File opened succesfully!\n\n");

	printf("In order to read from the file, we need to create an array that will store the\n");
	printf("then contents of the file to be outputed to the screen.\n\n");
	char content[2000]; //give a big value so that the whole file is saved
	
	printf("Next we need to input the contents of the file into the array.\n");
	printf("This can be done with fgets!\n");
	printf("	fgets(<arraypointer>,<size-to-read>,<datastream-pointer>)\n\n");
	int size_to_read = 2000;

	printf("This is however not enough, as fgets() reads till it encounters a \\n,\n");
	printf("meaning it can only read one line.\n");
	printf("But that ain't nothing a while loop can\'t fix!\n\n");

	printf("The contents of file are:\n");
	while (fgets(content, size_to_read, filepointer)) { //while the read string is something
		printf("%s",content); // output the string
	}
	printf("\nWhen you open a door and go in, close it!\n");
	fclose(filepointer);

	return 0;
}
