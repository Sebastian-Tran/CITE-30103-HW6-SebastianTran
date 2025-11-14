#include <stdio.h>

int main(){
	float grade;

	printf("Enter grade: \n");
	scanf("%f",&grade);
	
	if(grade < 60) printf("F\n");
	else if(grade <= 69) printf("D\n");
	else if(grade <= 79) printf("C\n");
	else if(grade <= 89) printf("B\n");
	else printf("A\n");



	return(0);
}
