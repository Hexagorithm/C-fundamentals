#include <stdio.h>
int main() {
	double fraction;
	int integer;
	printf("Please input a fraction!\n;");
	scanf("%lf", &fraction);
	printf("Please input an integer!\n:");
	scanf("%d", &integer);
	
	printf("As stated in inplicit conversion, if we were to add the fraction and integer together with nothing else\n\
	the integer value would be converted to double (because of the datatype hierrarchy) and added to the double.");
	double result1 = integer + fraction;
	printf("So the equasion will look like:\n");
	printf("%d + %lf = %lf\n", integer, fraction, result1);
	printf("Because:\n");
	printf("%d + %lf --> %lf + %lf = %lf\n", integer, fraction, (double)integer, fraction, result1);

	printf("But we can do something else!\n\
	We can manually convert the datatype of the fraction from double to int.\n\
	This will make the double value an integer, and since the value is integer\n\
	it can be easily added to the other integer.\n\
	This is yieald a different result than following the dataype hierarchy.\n");
	double result2 = integer + (int)fraction;
	printf("SO the euqasion will look like:\n");
	printf("%d + %lf = %lf\n", integer, fraction, result2);
	printf("Because:\n");
	printf("%d + %lf --> %d + %d = %lf\n", integer, fraction, integer, (int)fraction, result2);
	return 0;
	
}
