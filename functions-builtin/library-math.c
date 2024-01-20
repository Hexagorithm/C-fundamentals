#include <stdio.h>
#include <math.h>

// rememeber to link the math library manually when compiling!

int main() {
	int integer1;
	printf("Please input an integer1!\n:");
	scanf("%d",&integer1);

	printf("Lets get the square root of this integer1...\n");	
	printf("... using the BUILT SQRT FUNCTION OF THE MATH LIBRARY\n");
	printf("Running sqrt...\n");

	float result1 = sqrt(integer1);
	printf("[SQRT] Hey, i was not defined in this code, but i still run, that means that i am BUILT IN with the MATH LIBRARY!\n");
	printf("The sqrt of %d is %f\n",integer1, result1);


	int integer2;
	printf("Please input another integer value!\n:");
	scanf("\n%d",&integer2);
	printf("What do you think user? Maybe lets use ANTHER BUILT IN MATH FUNCTION?\n");
	printf("Great idea! Lets use cbrt() which is cuberoot.\n");

	printf("Running cbrt...\n");
	float result2 = cbrt(integer2);
	printf("[CBRT] Hey, i was not defined as well, but i do a predefined task?\n");
	printf("[CBRT] I must be BUILT-IN as well!\n");
	printf("The cbrt of %d is %f\n", integer2, result2);

	int integer3;
	int power;
	printf("Ok, input another integer value...\n:");
	scanf("\n%d",&integer3);
	printf("I am tired too, you know!\n");
	printf("Please input the power you want your last integer value to be.\n:");
	scanf("\n%d",&power);

	printf("The pow(number, power) function is also a built-in function, yada yada...\n");
	int result = pow(integer3, power);
	printf("The integer: %d , raised to the power of: %d , is: %d\n",integer3, power, result);
	

	return 0;
}
