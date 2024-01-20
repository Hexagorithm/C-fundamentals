#include <stdio.h>
#include <math.h>

int main() {
	int number = -1; // number must not be less than 0
	while (number < 0) {
		printf("Please input a positive integer value!\n:");
		scanf("%d",&number);
		
	}
	int result = pow(sqrt(number), number);
	printf("%d squarooted and raised to the power of %d is: %d\n",number, number, result);



	return 0;

}
