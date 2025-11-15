#include <stdio.h>

int main(){
	int evenCount, oddCount, posCount, negCount, i;

	evenCount = 0;
	oddCount = 0;
	posCount = 0;
	negCount = 0;

	printf("To quit, ENTER 0\n");
	printf("Otherwise, enter any integer. \n");
	do{
		printf("Enter a number: \n");
		scanf("%d",&i);

		if(i != 0){ 
			if(i > 0){
				posCount++;
			}
			else negCount++;

			if(i % 2 == 0){
				evenCount++;
			}
			else oddCount++;
		}
	} while(i != 0);

	printf("You entered %d positive numbers.\n", posCount);
        printf("You entered %d negative numbers.\n", negCount);
        printf("You entered %d even numbers.\n", evenCount);
        printf("You entered %d odd numbers.\n", oddCount);

	return(0);
}
