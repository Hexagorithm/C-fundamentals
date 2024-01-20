#include <stdio.h>

int main() {
	int number1;
	int number2;
	char operator;
	double resultd;
	int resulti;
	printf("Please input the first integer!\n:");
	scanf("%d",&number1);
	
	printf("Please input the second integer!\n:");
	scanf("\n%d",&number2);

	printf("Please input the operator! (+,-,*,/)\n:");
	scanf("\n%c",&operator);
	
	switch (operator) {
		case '+':
			resulti = number1 + number2;
			printf("The result is: %d", resulti);
			break;
		case '-':
		       	resulti = number1 - number2;
			printf("The result is: %d", resulti);
			break;
		case '*':
			resulti = number1 * number2;
			printf("The result is: %d", resulti);
			break;
		case '/':
			resultd = (double)number1 / (double)number2;
			printf("The result is: %lf", resultd);
			break;
		default:
			printf("Your operator is invalid!\n");
			break;
			
	}
	printf("\n");
	return 0;
}
