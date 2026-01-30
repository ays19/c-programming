#include<stdio.h>

void fun(int n) {
    if (n==0) return; //base case
    printf("%d\n", n);
    fun(n-1); //recursive call    
}

int main() {
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}