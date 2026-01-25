#include<stdio.h>

int main() 
{
     int a;
     scanf("%d", &a);
     int ans=a%10;
     int res=a/10;
     if(ans%res==0){
        printf("YES");
     }
     else if (res%ans==0){
        printf("YES");
     }
     else {
        printf("NO");
     }
    return 0;
}