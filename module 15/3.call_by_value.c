#include<stdio.h>

void pass_value(int x)
{
    printf("fun er x er address %p\n", &x);
    x=100;
}
int main() 
{
     int x=200;
     printf("main er x er address %p\n", &x);
     pass_value(x);
    printf("main er x er value %d\n", x);
    return 0;
}