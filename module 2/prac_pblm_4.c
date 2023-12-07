#include<stdio.h>

int main(){
    int s;
    scanf("%d", &s);
    if (s<0)
    {
        printf("negetive");
    }
    else if(s==0) {
        printf("zero");
    }
    else
    {
        printf("positive");
    }
    return 0;
    
}