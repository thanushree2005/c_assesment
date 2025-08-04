#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int s=0;
    int temp=num;
    while(temp>0){
        int z=temp%100;

        if(z%2==1 && ((z/10)%10)!=0){
        //printf("%d\n",z);
         s++;}
         temp=temp/10;
    }
     printf("%d",s);
     return 0;
}

