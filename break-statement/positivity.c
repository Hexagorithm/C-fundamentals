#include <stdio.h>

int main() {
	printf("This program checks your positivity!\n");
	int mood;
	while(1) {
	
		printf("Please input an integer that describes how you are feeling!\n:");
		scanf("%d",&mood);
		if (mood < 0) {
			printf("That is not good! I don't surround myself with negativity... bye bye!\n");
			break;
		}
		printf("That is good, i love toxic positivity!\n");
	}
	printf("Program ended!\n");

		

	return 0;
}
