#include <stdio.h>  

int main() {
	char fullName[30];
	printf("Please input your full name!:");
	fgets(fullName, sizeof(fullName), stdin);
	fullName[0] = 'X';
	printf("Your name is: %s\n",fullName);
	return 0;
}
