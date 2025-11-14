#include <stdio.h>

int main(){
	int x;
	printf("Enter an integer number: ");
	scanf("%d", &x);

	if((x % 2 == 0) && (x % 3 == 0) && !(x % 7 == 0)) printf("divisible by both 2, 3, and not 7\n");
	else printf("not divisible by both 2,3 and not 7\n");

}
