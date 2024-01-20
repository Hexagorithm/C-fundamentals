#include <stdio.h>
//when inputting variables for the scanf() function
//we confirm the input with enter
//this add to our input the \n character
//what we think: <input>
//what is actuall: <input>\n
//that is important
//if we have a programm that first takes in a double variable
//and then takes in a char variable
//it messes up shit
//after we input double variable like 0.5, the input buffer is 0.5\n
//the scanf wants the double value, so it strips it from the buffer
//buffer is now "\n"
//the scanf() that will take the char variable needs to expect the \n
//or it will just look into the buffer and mistake the \n as the input

int main() {
	char letter;
       	int number;
	printf("input a integer number:");
	scanf("%d", &number);
	printf("input a letter:");
	scanf("\n%c", &letter); //the scanf() is now expecting the \n, so it does not mistake it for input
	printf("number: %d, letter: %c\n", number, letter);
	return 0;


}
