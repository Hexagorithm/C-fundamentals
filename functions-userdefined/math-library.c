#include <stdio.h>
#include <math.h> //gives us the sqrt() function!
// the math.h library is quirky in the sense it needs to be directly linked in gcc,
// so just do: gcc <file.c> -o <file.exe> -lm

int main() {
	int integer;
	printf("Input the integer you want to square root!\n:");
	scanf("%d", &integer);
	double result = sqrt(integer);
	printf("Square root of %d is: %lf\n", integer, result);
	return 0;
}
