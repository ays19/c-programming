#include<stdio.h>

int main() 
{
     char a[7];
     for(int i=0;i<7;i++)
     {
        scanf("%c", &a[i]);
     }
     for(int i=0;i<7;i++)
     {
        printf("%c\n", a[i]);
     }
     printf("\n%d", sizeof(int));
    return 0;
}