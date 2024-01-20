#include <stdio.h>

int recursiveAddition();

int main() {
	printf("This program is about recursion!\n");
	int var1;
	int var2;

	printf("Please input a positive integer!\n:");
	scanf("%d",&var1);

	printf("Please input another positive integer!\n:");
	scanf("\n%d",&var2);

	printf("Starting recursive function!\n");
	int result = recursiveAddition(var1, var2);
	printf("Ending recursive function! The result of recursive %d + %d is %d .\n", var1, var2, result);

	return 0;

}

int recursiveAddition(int num1, int num2) {
	if (num2 == 0) {
		return num1;	
	}
	else {
		num1++;
		num2--;
		printf("[Recursion] Status check: num1: %d , num2 %d .\n", num1, num2);
		recursiveAddition(num1, num2);	
	}			
}
