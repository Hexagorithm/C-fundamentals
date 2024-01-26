#include <stdio.h>

struct Person {
	int age;
	int salary;
};

int main() {
	struct Person person1 = {.age=25, .salary=5000};
	struct Person person2 = {.age=32, .salary=6700};
	printf("The age of person1 is: %d\n",person1.age);
	printf("The age of person2 is: %d\n",person2.age);
	return 0;
}
