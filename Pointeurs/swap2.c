#include <stdio.h>

double swap2 (double *x, double *y) {
    double z = *x;
    *x = *y;
    *y = z;
    
}

int main (void) {
    double a = 1;
    double b = 2;
    printf("a = %f et b = %f\n", a, b);
    swap2(&a, &b);
    printf("a = %f et b = %f\n", a, b);
    return 0;
}

