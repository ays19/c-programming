#include<stdio.h>

int main() {
    int i;
    int n;
    
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1){
         printf("%d\t", i);
        if(i==6){
                break;
        }
         //printf("%d\n", i);
    }
   
    return 0;
}

