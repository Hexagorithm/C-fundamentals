#include <stdio.h>

typedef struct Complex {
	double real;
	double imagine;
}complx;

complx diff3complx( complx number1, complx number2, complx number3);

int main() {
	complx number1 = {
		.real = 25,
		.imagine = 30
	};
	printf("Number1: %lf + %lfi\n",number1.real, number1.imagine);
	complx number2 = {
		.real = 5,
		.imagine = 6 
	};
	printf("Number2: %lf + %lfi\n",number2.real, number2.imagine);
	complx number3 = {
		.real = 9,
		.imagine = 8 
	};
	printf("Number3: %lf + %lfi\n",number3.real, number3.imagine);
	complx result = diff3complx(number1,number2,number3);
	printf("The result is: %0.2lf + %0.2lfi\n",result.real, result.imagine);

}

complx diff3complx(complx number1, complx number2, complx number3) {
	complx result = {
		.real = number1.real - number2.real - number3.real,
		.imagine = number1.imagine - number2.imagine - number3.imagine
	};
	return result;
}
