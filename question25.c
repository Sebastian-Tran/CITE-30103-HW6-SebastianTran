#include <stdio.h>

int main(){
	int L, R, i, j;
	printf("Show multiplication tables from L to R.\n");
	printf("Enter start number for multiplication tables (L): \n");
	scanf("%d", &L);

	printf("Enter end number for multiplcation tables (R): \n");
	scanf("%d", &R);

	//determines which table number you are on [L-R]
	for(i = L; i <= R; i++){
		printf("Table of %d\n", i);

		//multiplication for each table for i * [1-10]
		for(j = 1; j <= 10; j++){
			printf("%d x %d = %d\n",i, j, i * j);
		}

		printf("\n");
	}



	return(0);
}
