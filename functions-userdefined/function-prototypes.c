#include <stdio.h>

//void printHello();

int main() {
	printf("When we declare a function after the main function\n");
	printf("we get a warning during compilation, that the function\n");
	printf("does not have its data type declared, even if we do int func(args)!\n");
	printf("This is because the compiler does not yet read that line, so we get an error.\n\n");
	
	printf("In order to not make the computer guess what type will the\n");
	printf("function output, while also having the main() function declared\n");
	printf("first for readability, we can use function prototypes!\n");
	printf("Like this!:\n\n");


	printHello();

	
	printf("\n\n");	
	return 0;
}

void printHello() {
	printf("Hello!\n");
}
