#include <stdio.h>

int main(){
	int a = 5, b = 3, res1, res2;
	res1 = a + (b << 1);
	res2 = a + b * 2;
	printf("Correct Value of res using parenthesis: %d\n", res1);
	printf("Correct Value of res using arithmetic: %d\n", res2);

	return 0;
}
