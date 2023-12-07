#include<stdio.h>
#include<limits.h>

int main() 
{
     int n;
     scanf("%d", &n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d", &arr[i]);
     }
     int lwst=INT_MAX,pos;
     for(int i=0;i<n;i++)
     {
        if(arr[i]<lwst)
        {
            lwst=arr[i];
            pos=i+1;
        }
        
       
     }
      printf("%d %d\n", lwst,pos);
    return 0;
}