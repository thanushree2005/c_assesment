#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int s=0;
    for(int temp=num;temp>0;temp=temp/10){
        int z=temp%10;
        if(z%2==1){
         s++;}
    }
     printf("%d",s);
     return 0;
}

