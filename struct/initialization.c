#include <stdio.h>

struct Vehicle {
	int wheels;
	double speed;
} car,bike;

int main() {
	car.wheels = 4;
	car.speed = 5.4;
	bike.wheels = 2;
	bike.speed = 5.6;
	printf("The speed of car is : %lf\n",car.speed);
	printf("The speed of bike is : %lf\n",bike.speed);

	return 0;
}
