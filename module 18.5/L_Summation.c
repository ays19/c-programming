#include<stdio.h>

long long fun(long long arr[],int n) {
    if (n==0) return 0; //base case
    
    return arr[n-1] + fun(arr,n-1);//recursive call    
}

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }
    printf("%lld\n", fun(arr,n));
    return 0;
}