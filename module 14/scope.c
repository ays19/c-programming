#include<stdio.h>

//Global
int x=500;
int fun()
{
    int s=500;
     printf("fun er s er address %p\n", &s );
     printf("%d\n", x);
     return s;
}
int main() 
{
     int s=500;
     printf("main er s er address %p\n", &s );
     fun();
    printf("abs %d\n", x);
    return 0;
}