#include <stdio.h>


int main() {
	printf("The for loop has the syntax of:\n\
for (<initializationExpression>;<testExpression>; updateExpression)\n\
\n\ 
- initializatonExpression - this is where you declare the variable that\n\
 you will use for your looping, your i variable.\n\
\n\ 
 - testExpression - this is where you declare the condition, which when true\n\
 will repeat the loop.\n\
\n\ 
 - updateExpression - this is where you declare what happens to the i parameter\n\
 after each iteration. It is vital, as this will ensure that i will at one point\n\
 make the testExpression false, ending the loop.\n\
 \n\
 The for loop will terminate right after checking the test expression to be false, not outputting for that parameter.\n");
	int start = 1;
	int end = 0;
	while (end < start) {
		printf("\nIteration loop! This loop will show you all number \
based on the range you give it!\n\
Please input the starting integer number!\n:");
		scanf("%d",&start);
		printf("Please input the ending integer number!\n:");
		scanf("\n%d",&end);
		if (end < start) {
			printf("Error: please input the start and end so start is less than end!\n");
		}
	}

	
	for (int i = start; i < end; i ++) {
		printf("%d ", i);	
	}
	printf("\n");

	return 0;
}
