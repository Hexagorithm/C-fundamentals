#include <stdio.h>


int main() {
	int var = 10;
	char chr = 'a';
	double num = 120.5;
	printf("Variable: %d , Size: %zu \n",var, sizeof(var));
	printf("Variable: %c , Size: %zu \n",chr, sizeof(chr));
	printf("Variable: %lf , Size: %zu \n",num, sizeof(num));
	return 0;
}
