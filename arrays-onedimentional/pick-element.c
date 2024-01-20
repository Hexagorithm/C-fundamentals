#include <stdio.h>

int main() {
	int integers[5] = {56,324,521,347,1};
	
	printf("The integers array looks like this: {");
	for (int i = 0 ; i <= 5 ; i++) {
		printf(" %d", integers[i]);
		if (i != 5) {
			printf(",");
		}
	}
	printf("}\n\n");
	int index;
	char choice;
	while (1) {
		printf("Would you like to input an index?(y/n)\n:");
		scanf("\n%c",&choice);
		if (choice == 'n') {
			break;	
		}
		printf("What index of array do you want to see?\n:");
		scanf("\n%d",&index);
		printf("At index: %d , the element is: %d .\n", index, integers[index]);
	}
	printf("\nThe script exited!\n");
	
	return 0;
}
