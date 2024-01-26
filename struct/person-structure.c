#include <stdio.h>

struct Person {
	int salary;
	int age;
};

int main() {
	struct Person person1;
	person1.age = 25;
	person1.salary = 5000;
	printf("The age of person1 is: %d\n",person1.age);
	printf("The salary of person1 is: %d\n",person1.salary);
	return 0;
}
