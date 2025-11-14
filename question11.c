#include <stdio.h>

int main(){
	int x,y;

	printf("Input two integers, x and y\n");
	printf("Enter an integer for x: \n");
	scanf("%d",&x);

	printf("Enter an integer for y: \n");
	scanf("%d",&y);

	printf("%d + %d = %d\n", x,y,(x + y));
	printf("%d - %d = %d\n", x,y,(x - y));
	printf("%d * %d = %d\n", x,y,(x * y));
	printf("%d / %d = %d\n", x,y,(x / y));
	printf("%d %% %d = %d\n", x,y,(x % y));
}
