#include<stdio.h>

int main() 
{
     int x=100;
     int *ptr = &x;

     x=200;
     *ptr = 200  ;
     // x-> *ptr are same here
    //  printf("x er address %p\n", &x);
    //  printf("ptr er vlaue %p\n", &x);
    //  printf("ptr er address %p\n", &ptr);
    //  printf("%d", sizeof(ptr));

    printf("x er value %d\n" ,x);
    printf("x er value %d\n" ,*ptr);
    
    return 0;
}