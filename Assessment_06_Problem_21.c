#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int s=0;
    while(num>0){
        int z=num%10;
        if(z%2==1){
         s++;}
        num=num/10;

   }
   printf("%d",s);
     return 0;
}
