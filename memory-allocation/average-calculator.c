#include <stdio.h>
#include <stdlib.h>

int main() {
	int amount;
	double* pointer;
	double sum;
	double result;
	printf("This program is able to calculate the average of the numbers you give it!\n");
	printf("Please input the amount of double numbers to be inputted: ");
	scanf("%d",&amount);
	pointer = (double*) malloc( amount * sizeof(double));
	if (pointer == NULL) {
		printf("Malloc failed? That is quite weird...\n");
		return 0;
	}
	for (int i = 1; i <= amount ; i++) {
		printf("Please input the %d double number: ",i);	
		scanf("%lf",pointer+i-1);
	}
	for (int i = 0; i < amount ; i++) {
		sum += *(pointer + i);

	}
	printf("The sum of inputted values is %lf .\n",sum);
	result = sum / amount;
	printf("The average: %lf / %d = %0.2lf\n",sum, amount, result);
	printf("Freeing allocated memory...\n");
	free(pointer);
	return 0;
}
