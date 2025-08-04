#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
   int s=0;
    while(num>0){
        int p=1;
        int z=num%10;
        int i=2;
        while(i<z){
        if(z%i==0){
         p=0;}
         i++;
         }
         if(z==1){
            p=0;
         }
         if(p==1){
            s++;
            //printf("%d\n",z);

    }
           num=num/10;

   }
   printf("%d",s);
     return 0;
}
