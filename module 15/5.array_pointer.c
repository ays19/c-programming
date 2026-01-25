#include<stdio.h>

int main() 
{
     int arr[5]={5,2,6,9,8};
     printf("0 th er address %p\n", &arr[0]);
     printf("0 th er address %p\n", arr);
     printf("0 th er address %d\n", &arr[0]);
     printf("0 th er address %d\n", *arr);
      printf("1 th er address %d\n", *(arr+1));
      printf("%d\n", 1[arr]);
      printf("%d\n", arr[1]);
    return 0;
}