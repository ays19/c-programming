#include<stdio.h>

int main() 
{
     char a;
     scanf("%c", &a);
     if(a>='a' && a<='y') {
        int ans =a+1;
        printf("%c\n", ans);
     }
     else {
        printf("a\n");
     }
    return 0;
}