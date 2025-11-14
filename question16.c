#include <stdio.h>

int main(){

	int x;
	printf("Enter an integer to determine positive, negative, or zero: \n");
	scanf("%d",&x);
	if(x == 0) printf("number is zero\n");
	else if(x > 0) printf("number is positive\n");	 
	else printf("number is negative\n");
	return 0;
}
