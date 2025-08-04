#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
    printf("enter a number");
    scanf("%d",&num);
    int prime=1;
    int i=2;
    loop:if(i<num){
        if(num%i==0){
            prime=0;

        }
         i++;
         goto loop;
    }
   if(prime==1){
    printf("prime");
   }else{
        printf("not prime");
   }
    return 0;
}
