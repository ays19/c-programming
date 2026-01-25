#include<stdio.h>
#include<string.h>


int main() 
{
     char a[100];
     scanf("%s", a);
     int count[26]={0};
     for(int i=0;i<strlen(a);i++)
     {
        int val=a[i]-'a';
        count[val]++;
     }
     /*for(int i=0;i<26;i++)  //Alphabetic serial
     {
        if(count[i]!=0)
        {
        printf("%c - %d\n",i+'a',count[i]);
        }
     }*/

     for(int i=0;i<strlen(a);i++)  //Alphabetic serial
     {
        int value=a[i]-'a';
        if(count[value]!=0){
        printf("%c - %d\n",value+'a',count[value]);
        }
        count[value]=0;
     }
    return 0;
}