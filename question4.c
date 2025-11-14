#include <stdio.h>

int main(void) {
    //Original Line declared a and b as integers, but that results in a typecasting error when being used to calculate float avg.
    float a = 5, b = 10;
    float avg = (a + b) / 2;
    printf("Average = %.2f\n", avg);
    return 0;
}
