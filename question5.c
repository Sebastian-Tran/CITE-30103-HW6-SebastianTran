#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n); //bug was here. instead of &n being used, it was just n. The bug was that scanf uses an address for 2nd arg.
    printf("You entered %d\n",n);
    return 0;
}
