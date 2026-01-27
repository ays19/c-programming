#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //printf("a[%d][%d] ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    //output exact array
    // int e;
    // scanf("%d", &e);
    //  for(int i=0;i<col;i++)
    //     {
            
    //         printf("%d ", arr[e][i]);
    //     }
    //     printf("\n");
    // }
    
    //exact column
    int c;
    scanf("%d", &c);
    for(int i = 0;i<row;i++)
    {
        printf("%d ", arr[i][c]);

    }
    return 0;
}