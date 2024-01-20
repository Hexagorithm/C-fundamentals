#include <stdio.h>

void printCurrentArray();
void addElement();
int array[] = {};
int length = 0;
int main() {
	int option;
	int value;
	int index;
	printf("Welcome to your personal array builder!\n");
	printf("Here you can build your own integer array!\n");
	while (1) {
		printf("Options:\n");
		printf("	1 | add integer element to array\n");
		printf("	2 | print current array\n");
		printf("	3 | exit program\n");
		printf(":");
		scanf("\n%d",&option);
		if (option == 1) {
			addElement();	
		}
		else if (option == 2) {
			printCurrentArray();	
		}

		else if (option == 3) {
			break;
		}
		else {
			printf("Option not valid!\n");
		}
		printf("\n\n\n\n\n\n\n\n\n\n");
	}

	return 0;
}

void printCurrentArray() {
	printf("Your array is: {");
	for (int i = 0; i < length; i++) {
		printf("%d",array[i]);
		if (i != length - 1) {
			printf(", ");
		}
	}
	printf("}\n");
}

void addElement() {
	int index;
	int element;
	printf("Please input the index you want the element to be:");
	scanf("\n%d",&index);
	printf("Please input the element you want at this index:");
	scanf("\n%d",&element);
	if (index + 1 > length) {
		length = index + 1;
	}
	array[index] = element;
	printf("Changes have been written!\n");
}
