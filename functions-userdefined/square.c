#include <stdio.h>

int user_input_int() {

	int usr;
	printf("Please input an integer value!\n:");
	scanf("%d", &usr);
	return usr;
}

int square(int integer) {
	integer = integer * integer;
	return integer;	

}

int main() {
	printf("This program computes the square value of the integer you give it!\n");
	int integer = user_input_int();
	printf("The square of %d is: %d .\n",integer, square(integer));

	return 0;
}


