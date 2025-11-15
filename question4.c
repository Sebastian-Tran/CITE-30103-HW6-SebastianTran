#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    float avg = (float) (a + b) / 2; //integers were originally implicitly typecasted, but that resulted in wrong value.
    printf("Average = %.2f\n", avg);
    return 0;
}
