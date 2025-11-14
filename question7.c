#include <stdio.h>

#define PID 3.14159265

int main(){
	const double PIC = 3.14159265;

	double radius, constArea, constCircumference, defArea, defCircumference;

	printf("Enter the radius of the circle: \n");
	scanf("%lf", &radius);

	constArea = PIC * radius * radius;
	constCircumference = 2 * PIC * radius;

	defArea = PID * radius * radius;
	defCircumference = 2 * PID * radius;

        printf("Area using CONSTANT: %.2lf\n", constArea);
        printf("Circumference using CONSTANT: %.2lf\n", constCircumference);
	printf("Area using DEFINE: %.2lf\n", defArea);
	printf("Circumference using DEFINE: %.2lf\n", defCircumference);

	return 0;
}
