#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int num;
    printf("enter a number");
    scanf("%d",&num);
    int temp=num;
    int i=0;
    while(temp>0){
       i++;
       temp=temp/10;
    }
    int x=100;
    int prime=1;
    //printf("%d",num-(x*(num/x)));
    int z=num-(x*(num/x));
    i=2;
    while(i<z){
        if(z%i==0){
            prime=0;
        }
        i++;
    }
   if(prime==1){
    printf("prime");
   }else{
        printf("not prime");
   }
    return 0;
}
