#include<stdio.h>
#include<string.h>

void fun(char st[])
{
    printf("%d ", strlen(st));
}

int main() 
{
     char st[10]="hello";
     int sz=sizeof(st)/sizeof(char);
     printf("%d\n", sz);
     fun(st);
    return 0;
}