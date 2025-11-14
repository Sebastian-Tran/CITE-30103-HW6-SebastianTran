/* DOCUMENTATION SECTION */
/* Created by Sebastian Tran. Program calculates and outputs the area and perimeter of a rectangle.
   Assumes integer inputs.

*/

/* LINK SECTION */
#include <stdio.h>

/*GLOBAL DEFINITIONS */

/* Main function */
int main(){

	int length, width, area, perimeter;

	printf("Enter an integer for the length of a rectangle: \n");
	scanf("%d",&length);

	printf("Enter an integer for the width of a rectangle: \n");
	scanf("%d",&width);

	area = length * width;
	perimeter = (2 * length) + (2 * width);

	printf("Area of the rectangle is: %d\n",area);
	printf("Perimeter of the rectangle is %d\n",perimeter);
	
}
