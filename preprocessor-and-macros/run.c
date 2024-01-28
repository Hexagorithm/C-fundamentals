#include <stdio.h> // #include is a preprocess, it is used to run the stdio.h before compiling.
#define PI 3.14 //macro
#define circleArea(r) (PI * r * r)
int main() {
	printf("%.2lf\n",PI);
	int radius = 5;
	double area = circleArea(radius);
	printf("For a radius of %d the area is %lf . \n",radius,area);
	return 0;
}
