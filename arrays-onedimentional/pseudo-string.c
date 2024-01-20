#include <stdio.h>

int main() {
	printf("This program lets you input your name!\n");
	printf("Please input the length of your name!\n:");
	int length;
	scanf("%d",&length);
	char name[length];
	for (int i = 0; i < length; i++) {
		printf("Please input the %d. letter of your name!\n:", i);
		scanf("\n%c",&name[i]);
	}
	printf("Your name is: ");
	for (int i = 0; i < length; i++) {
		printf("%c",name[i]);
	}
	printf(" !\n");

	return 0;
}
