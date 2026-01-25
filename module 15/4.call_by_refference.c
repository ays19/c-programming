#include<stdio.h>

void pass_refference(int *p)
{
    printf("value of main x %p\n", *p);
    *p = 55;
}
int main() 
{
     int x=10;
     printf("address of x %p\n", &x);
     pass_refference(&x);
     printf("value of main x %d\n", x);
    return 0;
}