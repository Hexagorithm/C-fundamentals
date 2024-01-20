#include <stdio.h>
/*
Variables should never be changed inside functions
they should be changed as separate lines
when printf is compiled, the compiler will look if
variables can be simplified, and will evaluate the variables in the statement
the compiler does not explisitly say from which side it will compile
if from left to right, or from right to left
either way the variable will be the same, instead of changing
*/

int main() {
	int variable = 10;
	printf("This is bad practice: %d + 1 = %d\n", variable, ++variable); // variable and ++ varialbe will have the same value when outputted
	variable = 20;
	printf("This is good practice: %d + 1 = ",variable) ;
	variable ++;
	printf("%d\n", variable);
	variable = 30;
	printf("This is also good practice: %d + 1 = %d\n", variable, variable + 1);
	return 0;
	
}
