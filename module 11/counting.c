#include<stdio.h>

int main() 
{
     int n;
     scanf("%d", &n);
     int a[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d", &a[i]);
     }
    /* for(int i=0;i<n;i++)
     {
        printf("%d\n", a[i]);
     }
     int zero=0,one=0;
     for(int i=0;i<n;i++)
     {
        if(a[i]==0)
        {
        zero++;
        }
     }
     printf("%d", zero);*/

     int count[7]={0};
     for(int i=0;i<n;i++)
     {
        int val=a[i];
        count[val]++;

     }
     for(int i=0;i<7;i++)
     {
        printf("%d - %d\n",i,count[i]);
     }
    return 0;
}