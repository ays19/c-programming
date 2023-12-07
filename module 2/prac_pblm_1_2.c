#include<stdio.h>

int main() {

   /* printf("Recently I heard that you've achieved 95%% marks in your exam.\n");
    printf("This is brilliant!\n ");
    printf("I wish you’ll shine in your life!\t\t");
    printf("Good luck with all the barriers(/\\) in your life."); */

    int a,b;
    scanf("%d %d",&a, &b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a*1.0/b;
    printf("%d ", sum);
    printf("%d ", sub);
    printf("%d ", mul);
    printf("%0.2f ", div);


    return 0;
}