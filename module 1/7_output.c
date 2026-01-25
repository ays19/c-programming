#include<stdio.h>

int main(){

    int s,y;
    float x;
    char z;
    scanf("%d%c %d %f ", &s, &z, &y, &x);
    printf("%d%c %d %0.2f\n", s,z,y,x);
    scanf("%d%% %da ", &s,&y);
    printf("%d%% %da", s, y);
    
    
    return 0;
}