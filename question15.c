#include <stdio.h>

int main(){
	float s1,s2,s3,s4,s5;
	printf("Input 5 subject marks to determine PASS/FAIL\n");
	printf("Enter the first subject mark: \n");
	scanf("%f",&s1);

        printf("Enter the second subject mark: \n");
        scanf("%f",&s2);

        printf("Enter the third subject mark: \n");
        scanf("%f",&s3);

        printf("Enter the fourth subject mark: \n");
        scanf("%f",&s4);

        printf("Enter the fifth subject mark: \n");
        scanf("%f",&s5);

	if(s1 >= 40) printf("Subject 1: PASS\n");
	else printf("Subject 1: FAIL\n");

        if(s2 >= 40) printf("Subject 2: PASS\n");
        else printf("Subject 2: FAIL\n");

        if(s3 >= 40) printf("Subject 3: PASS\n");
        else printf("Subject 4: FAIL\n");

        if(s4 >= 40) printf("Subject 4: PASS\n");
        else printf("Subject 4: FAIL\n");

        if(s5 >= 40) printf("Subject 5: PASS\n");
        else printf("Subject 5: FAIL\n");
	return 0;
}
