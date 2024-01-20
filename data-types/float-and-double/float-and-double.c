#include <stdio.h>

// float and double are both datatypes that can store integers with decimal digits
// double has the size of 8 bytes and its format specifier is %lf(probably an abreviation of "long float") (2x the size of int)
// float has the size of 4 bytes and its format specifier is %f (the same size of int)

int main() {
	double var1 = 12.45;
	float  var2 = 12.45f;
	printf("These are: the double variable: %lf , and the float variable: %f .\n", var1, var2);
	printf("If you don\'t want the trailing zeros, use this: %.2lf %.2f .\n", var1, var2);
	printf("It is generally better to use double instead of float, since it is more precise.\n");
	double big_var = 5.5e10;
	printf("You can even have exponential numbers represented by variables: %lf .\n", big_var);
	return 0;
}
