#include<stdio.h>

void fun(char *a)
{
    //arr[0]=500;
    a[0]='s';
}

int main() 
{
    char a[]="hello";
    //  int arr[5]={5,1,2,6,9};
     
    //  fun(arr);
    //  for(int i=0;i<5;i++)
    //  {
    //     printf("%d ", arr[i]);
    //  }
    fun(a);
    printf("%s", a);
    return 0;
}