#include <stdio.h>
#include <stdbool.h>

int main() {
	int age;
	int legal_age = 18;
	printf("Hello user. Because of the comming elections\n\
We have created a program that\n\
determines if you voted (legally) before.\n\
\n\
Please input your integer age!\n:");
	scanf("%d",&age);
	if (age > 120 || age < 0) {
		printf("No! This is not a valid age!\n");
	}

	else if (age > legal_age) {
		printf("Nice! It appears that you were eligable to vote for at least 1 election before!\n");
	}
	else if (age == legal_age)
		printf("Congrats! This is your first legit election!\n");
	else {
		printf("Sorry, it appears that you were and are yet not eligable to vote!\n");
	}
	return 0;
}
