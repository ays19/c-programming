#include<stdio.h>

int main() {
    int i;
    int n;
    int sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i=i+2){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}

