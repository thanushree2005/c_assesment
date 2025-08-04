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

        if(((z/10)%10)!=0){
        if(z==16||z==25||z==36||z==49||z==64||z==81){
        s++;

    }

         }
         temp=temp/10;
    }
     printf("%d",s);
     return 0;
}

