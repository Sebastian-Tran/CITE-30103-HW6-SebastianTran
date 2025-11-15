#include <stdio.h>

int main(){

	int input, reversedInput, originalInput, remainder;

	printf("Enter a positive integer: \n");
	scanf("%d", &input);

	originalInput = input;
	
	reversedInput = 0;
	while(input != 0){

		remainder = input % 10;
		reversedInput = reversedInput * 10 + remainder;
		input = input / 10;
	}

	printf("Inputted number: %d\n", originalInput);
	printf("Reversed number: %d\n", reversedInput);

	return 0;


}
