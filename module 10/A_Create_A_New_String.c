#include<stdio.h>
#include<string.h>

int main() 
{
     char s[1001],t[1001];
     scanf("%s %s", s,t);
     int lenS=strlen(s);
     int lenT=strlen(t);
     printf("%d %d\n%s %s", lenS,lenT,s,t);
    return 0;
}