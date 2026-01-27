#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row,&col);
    int arr[row][col];
    int elm=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if (arr[i][j]==0)
            {
                count++;
            }
            
        }
    }
    //printf("%d\n", count);
    if(elm==count)
    {
        printf("Zero matrix\n");
    }
    else{
        printf("Non zero matrix\n");
    }
    return 0;

}