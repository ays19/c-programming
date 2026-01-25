#include<stdio.h>

int main() 
{
     int a,b,ans;
     scanf("%d %d", &a,&b);
     ans=a-b;
     if(ans>=0){
        printf("%d\n", ans);
     }
     else {
        printf("0\n");
     }
    return 0;
}