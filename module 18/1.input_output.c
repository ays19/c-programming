#include<stdio.h>

int main()
{
    //declare 2d array
    int arr[5][3];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            //printf("a[%d][%d] ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    //output 2d array
     for(int i=0;i<5;i++){
        
        for(int j=0;j<3;j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
    