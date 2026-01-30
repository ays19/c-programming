#include<stdio.h>

void fun(int arr[],int n,int idx) {
    if (idx>=n) return; //base case
    
    fun(arr, n, idx+2);
    printf("%d ", arr[idx]); //recursive call    
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1005];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    fun(arr, n, 0);
    return 0;
}