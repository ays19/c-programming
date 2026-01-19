#include<stdio.h>

void fun(int i) {
    if (i==6) return; //base case
    printf("%d\n", i);
    fun(i+1); //recursive call    
}

int main() {
    fun(1);
    return 0;
}