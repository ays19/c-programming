#include<stdio.h>

void sum(int x,int y)
{
    int s=x+y;
    printf("%d", s);
}
int main() 
{
     int a,b;
     scanf("%d %d", &a, &b);
     sum(a,b);  //no return so kono value ashbe na and value nite hobe na. int s = sum(a,b); eta hobe na
    return 0;
}