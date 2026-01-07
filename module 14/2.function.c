#include<stdio.h>

int sum(void) //void na dile main function e sum(100) value dite parbe but kono kaaja hobe na,error dibe na..
{
    int a,b;
    scanf("%d %d", &a, &b);
    int s=a+b;
    return s;
}
int main() 
{
     int x=sum();
     printf("%d ", x);
    return 0;
}