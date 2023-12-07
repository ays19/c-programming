#include<stdio.h>

int main() 
{
     int x=100;
     printf("%p\n", &x);
     int *p=&x;
     printf("%d\n", p);
     //derefference
     printf("%d\n", *p);

     *p=500;
     printf("%d", x);
    return 0;
}