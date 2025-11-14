#include <stdio.h>

int main(){

	int x;
	printf("Enter an integer to determine positive, negative, or zero: \n");
	scanf("%d",&x);
	(x == 0) ? printf("number is zero\n") : ((x > 0) ? printf("number is positive\n") : printf("number is negative\n"));

}
