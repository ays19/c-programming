#include<stdio.h>

int main() {
    int tk;
    scanf("%d",&tk);

    if(tk>=100)
     {
        printf("Burger khabo");
     }
    else if(tk>=50){
        printf("fuska khabo");
    }
    else if (tk>=25){
        printf("ice cream");
    }
    else {
        printf("khabo na");
    }
    return 0;
}