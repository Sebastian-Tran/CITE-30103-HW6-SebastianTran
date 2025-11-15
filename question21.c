#include <stdio.h>

int main(){
	int rows, i, j, k;

	printf("Enter number of rows: \n");
	scanf("%d", &rows);

	for(i = 1; i <= rows; i++){
		//print spaces on the left
		for(k = 1; k <= rows - i; k++){
			printf(" ");
		} 
		//print stars of the pyramid
		for(j = 1; j <= i; j++){
			printf("* ");
		}

		printf("\n");
	}


	return(0);


}
