#include<stdio.h>

int main() 
{
    double x = 5.26;
    double *ptr = &x;
    printf("x er vlaue %0.2lf\n", x);
    printf("x er vlaue %0.2lf \n", &ptr);
    printf("x er vlaue %0.2lf \n", *ptr);
    return 0;
}