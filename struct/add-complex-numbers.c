#include <stdio.h>

typedef struct ComplexNumber {
	double real;
	double fake;
}cmplx;

cmplx add_complex(cmplx number1, cmplx number2);


int main() {
	cmplx number1 = {.real= 12, .fake = 1};
	printf("Number1 -> %lf + %lfi\n",number1.real, number1.fake);
	cmplx number2 = {.real= 13, .fake = 3};
	printf("Number2 -> %lf + %lfi\n",number2.real, number2.fake);
	cmplx result = add_complex(number1,number2);
	printf("Result of addition: %0.2lf + %0.2lfi\n",result.real,result.fake);
	return 0;
}

cmplx add_complex(cmplx number1, cmplx number2) {
	cmplx result = {
		.real = number1.real + number2.real, 
		.fake = number1.fake + number2.fake
	};
	return result;
}
