#include<stdio.h>

//void fun(int ar[], int n)
void fun(int *ar, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ", ar[i]);
    }
}

int main() 
{
     int arr[5]={5,2,6,9,8};
    //  int sz=sizeof(arr)/sizeof(int);
    //  printf("%d", sz);
    fun(arr, 5);
    return 0;
}