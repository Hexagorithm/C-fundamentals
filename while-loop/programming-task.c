#include <stdio.h>

int main() {
	int number;
	printf("Input the number you want to know the multiplication table for!\n:");
	scanf("%d", &number);

	int count = 10;
	while (count > 0) {
		printf("%d * %d = %d\n",number,count, number * count);
		count --;
	}

	return 0;
}
