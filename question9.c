#include <stdio.h>

int main(){

	int x, y, d;
	float i,e;

	printf("Input two integers to show both integer and floating-point division results (x / y). \n");
	printf("Enter the first integer, x: \n");
	scanf("%d", &x);

	printf("Enter the second integer, y: \n");
	scanf("%d",&y);

	d = x / y;
	i = x / y;
	e = (float) x / y;
	
	printf("Integer division result: %d\n",d);
	printf("Implicit casting floating-point division result: %.2f\n",i);
	printf("Explicit casting floating-point division result: %.2f\n",e);

	return 0;
}
