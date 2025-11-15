#include <stdio.h>

int main(){
	int count, i;

	count = 0;
	printf("To quit, ENTER 0\n");
	printf("Otherwise, enter any integer. \n");
	do{
		printf("Enter a number: \n");
		scanf("%d",&i);

		if(i != 0) count++;

	} while(i != 0);

	printf("You entered %d numbers.\n", count);

	return(0);
}
