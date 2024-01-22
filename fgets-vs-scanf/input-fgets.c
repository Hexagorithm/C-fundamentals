#include <stdio.h>

int main() {
	char fullName[20];
	printf("Please input your full name:");
	fgets(fullName, sizeof(fullName),stdin);
	printf("Your full name is: %s",fullName);
	return 0;
}
