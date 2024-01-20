#include <stdio.h>

/*
Addition | +
Subtraction | -
Multiplication |
Division | /
Modulo | %
increment by 1 | ++
decrement by 1 | --
*/

int main() {
	int var1;
	int var2 = 0;
	printf("Please input var1!\n:");
	scanf("%d", &var1);
	while (var2 == 0) {
	
		printf("Please input var2!\n:");
		scanf("\n%d", &var2);
		if (var2 == 0) {
			printf("Var2 will be used for division, make sure it is not 0!\n");	
		}
	}
	printf("%d + %d = %d\n", var1, var2, var1 + var2);
	printf("%d - %d = %d\n", var1, var2, var1 - var2);
	printf("%d * %d = %d\n", var1, var2, var1 * var2);
	printf("%d / %d = %d\n", var1, var2, var1 / var2);
	printf("%d %% %d = %d\n", var1, var2, var1 % var2);
	printf("%d + 1 = ", var1);
	var1++; // good practice
	printf("%d\n", var1);
	printf("%d - 1 = ", var2);
	var2--; // good practice
	printf("%d\n", var2);
	return 0;
}
