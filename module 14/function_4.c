#include<stdio.h>

void sum(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    int s=a+b;
    printf("%d ", s);
}
int main() 
{
     sum();
     sum();
    return 0;
}