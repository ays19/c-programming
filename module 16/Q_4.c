#include<stdio.h>

void sum_arr() 
{
     int n;
     scanf("%d", &n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d", &arr[i]);
     }
     int sum=0;
     for(int i=0;i<n;i++)
     {
        sum=sum+arr[i];
    }
    printf("%d", sum);
   
}

int main() {
    sum_arr();
    return 0;
}