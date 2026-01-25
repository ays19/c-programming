#include<stdio.h>
#include<string.h>

int main() 
{
     char a[100],b[100];
     scanf("%s %s", a,b);
     int s=strcmp(a,b);
     if(s<0)
     {
        printf("A smaller\n");
     }
     else if(s>0)
     {
        printf("B smaller\n");
     }
     else{
        printf("same\n");
     }
     //printf("%d", s);
    return 0;
}