#include <stdio.h>

int main(){

	int input, i, answer;

	printf("Enter a number to calculate the sum of numbers from 1 to your number: \n");
	scanf("%d",&input);
	
	i = 1;
	answer = 0;

	while(i <= input){
		answer += i;
		i++;
	}
	printf("Sum of numbers from 1 to %d = %d\n", input , answer);

	return(0);
}
