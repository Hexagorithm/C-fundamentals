#include <stdio.h>
#include <math.h>

#define squareRoot(number) ( sqrt(number) )

int main() {
	int number = 25;
	double result = squareRoot(number);
	printf("For number: %d the square root is %lf\n",number, result);
	return 0;
}
