#include <stdio.h>

int main(){
	double x, y, result;
	char op;

	printf("Enter first number (x): \n");
	scanf("%lf",&x);

        printf("Enter operator (+, -, *, /): \n");
        scanf(" %c",&op);

        printf("Enter second number (y): \n");
        scanf("%lf",&y);

	switch(op){
		case '+':
			result = x + y;
			printf("%.2lf + %.2lf = %.2lf\n", x, y, result);
			break;

		case '-':
			result = x - y;
			printf("%.2lf - %.2lf = %.2lf\n", x, y, result);
			break;

		case '*':
			result = x * y;
			printf("%.2lf * %.2lf = %.2lf\n", x, y, result);
			break;

                case '/':
			if(y == 0){
				printf("ERROR: division by zero\n");
                        	break;
			}
			result = x / y;
                        printf("%.2lf / %.2lf = %.2lf\n", x, y, result);
                        break;

		default:
			printf("ERROR: Invalid Operation\n");
			break;
	}

	return(0);
}
