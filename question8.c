#include <stdio.h>

int g = 5;

int main(){

	int l;
	l = 10;
	printf("global: %d\n",g); //g can be accessed by all functions
	printf("local: %d\n",l); //l can only be accessed within the scope of main()
	return 0;
}
