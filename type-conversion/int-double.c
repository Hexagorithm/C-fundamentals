#include <stdio.h>

int main() {
	double fraction;
	int integer;
	printf("Input a fraction!\n:");
	scanf("%lf",&fraction);
	printf("Input an integer\n:");
	scanf("\n%d",&integer);
	printf("When adding an integer and a fraction, the integer is converted\n\
	into a fraction, then the fractions are added together\n");
	double integerd = integer;
	int result = fraction + integerd;
	printf("So an equasion:\n");
	printf("%lf + %d = %d\n", fraction, integer, result);
	printf("Is actually:\n");
	printf("%lf + %d --> %lf + %lf = %lf --> %d\n", fraction, integer, fraction, integerd, fraction + integerd, result);
	printf("\nHowever double to int conversion is not as simple as char to int.\n\
	Chars are actually ascii encoded integers, while doubles don't correspond to any integers.\n\
	You cant just specify in printf that the sum of an int and double should be outputted as decimal\n\
	You have to define a new variable that is int, and there store the output of the addition, which will be int like you want\n");
	return 0;
}
