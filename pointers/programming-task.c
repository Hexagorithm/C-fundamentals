#include <stdio.h>

int main() {
	double salary = -1;
	double* salary_pointer = &salary;
	printf("Please input your salary:");
	scanf("%lf",salary_pointer);
	printf("Inputted salary: %lf\n",*salary_pointer);
	*salary_pointer = 2 * *salary_pointer;
	printf("Increased salary: %lf\n",*salary_pointer);
	return 0;
}
