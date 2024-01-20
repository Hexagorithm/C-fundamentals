#include <stdio.h>

// to take input, we use the scanf() function
// the function cant prompt for the variable, only read it
// so printf the prompt asking about the variable.
// scanf() will use the enter symbol you type, so no need to add \n anywhere

// & symbol points the computer to a certain memory address
// &age tells the computer to look to the address where age variable is stored

int main() {

	double fraction;
	char letter;
	int number;

	printf("Please input your favourite fraction: ");
	scanf("%lf",&fraction);
	
	printf("Please input your favourite letter: ");
	scanf("\n%c", &letter);

	printf("Please input your favourite number: ");
	scanf("%d", &number);

	printf("Here are your favourite things in life:\n");
	printf("Favourite fraction: %lf\n", fraction);
	printf("Favourite letter: %c\n", letter);
	printf("Favourite number: %d\n", number);
	return 0;
}
