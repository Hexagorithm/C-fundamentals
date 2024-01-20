#include <stdio.h>

int main() {
	printf(
"The ternary operator is called so after its syntax.\n\
The ternary operator is basically an if statement,\n\
that expands on 2 paths based on the logical value of the test.\n\
The syntax is:\n\
<test_condition> ? <expression1> : <expression2>;\n\
- if <test_condition> == true  --> <expression1>\n\
- if <test_condition> == false --> <expression2>\n\n");

	int age;
	printf("Check if you are eligable to vote!\n:");
	scanf("%d",&age);
	( (age > 17) ) ? printf("Congrats, you are eligable to vote!\n") : printf("Sorry, you are not eligable to vote!\n") ;
	return 0;
}
