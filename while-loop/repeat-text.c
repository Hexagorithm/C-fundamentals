#include <stdio.h>

int main() {

	int times;
	printf("How many times should the text be repeated?\n:");
	scanf("%d", &times);

	times = (times >= 0) ? times : -1;
	
	switch(times) {
		case -1:
			printf("Invalid value!\n");
			return 1;
		default:
			break;	
	}
		
	while (times > 0) {
		times --;
		printf("the text\n");
	}
	return 0;

}
