#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("The malloc function is used to ~dynamically~ allocate memory in the program.\n");
	printf("What does that mean? It means that we can create an array of memory that will be used for data.\n\n");

	printf("	\"Well that sure does sound like making an array with extra steps, don\'t it?\"\n\n");

	printf("Yea, malloc is basically creating an array in memory of specified length.\n");
	printf("There is - however - a difference between arrays and dynamically allocated memory.\n\n");
	printf("When declaring arrays, they have to be of specified length - you need to use an integer\n");
	printf("number to denote the length of the array.\n\n");

	printf("What is the problem?\n");
	printf("The problem is that if we wanted the user to input the length of the array\n");
	printf("we can\'t use an array- arrays can\'t be of length specified by a variable.\n");
	printf("For that, we use malloc.\n");
	
	int length = 5; //amount of bytes to be allocated
	int* pointer; // a pointer that will point to the beginning of the "memory-array"

	pointer = (int*) malloc( length * sizeof(int)); //assign the pointer to be the begiining of a leght * 4 byte allocated memory array
	printf("Checking if malloc failed...");
	if ( pointer == NULL) {
		printf(" it failed, weird...\n");
		return 0;

	}
	else {
		printf(" it succeded!\n");
	}

	for (int i = 0; i < length;i++)	{
		printf("Please input an integer! :");
		scanf("%d",pointer+i);
	}
	printf("Values you have inputted:\n");
	for (int i = 0; i < length;i++)	{
		printf("%d\n",*(pointer+i));
	
	}
	printf("Input completed!\n");
	printf("\n");

	int len;
	int* ptr;
	
	printf("Please input the number of integer values to be inputted! :");
	scanf("%d",&len);
	ptr = (int*) malloc(len * sizeof(int));
	
	printf("Checking if malloc failed...");
	if ( ptr == NULL) {
		printf(" it failed, weird...\n");
		return 0;

	}
	else {
		printf(" it succeded!\n");
	}

	for (int i = 0; i < len; i ++) {
		printf("Please input an integer! :");
		scanf("%d",ptr + i);
	}
	printf("Input completed!\n");
	printf("\n");
	
	printf("Your input:");
	for (int i = 0; i < len; i ++) {
		printf("%d ",*(ptr+i));
	}
	printf("\nFreeing memory of pointer...\n");	
	free(pointer);
	printf("Freeing memory of ptr...\n");
	free(ptr);

	printf("\nGoodbye!\n");

	return 0;	
}
