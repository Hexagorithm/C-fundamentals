#include <stdio.h>

int factorial();

int main() {
	printf("This program will calculate the factorial of integer you give it!\n");
	int integer;
	printf("Please input the integer!\n:");
	scanf("%d",&integer);

	printf("Starting recursive factorial function!\n");
	int result = factorial(integer);
	printf("Ending recursive factorial function!\n");
	printf("The result of: %d! is: %d\n",integer, result);



	return 0;
}


int factorial( int number) {
	if (number == 1) {
		return 1;
	}
	else {
		return number * factorial(number - 1);	
	}
}
