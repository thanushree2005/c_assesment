#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int num;
    printf("enter a number");
    scanf("%d",&num);
    int i=0;
    for(int temp=num;temp>0;temp=temp/10;){
       i++;
    }
    int x=100;
    int prime=1;
    printf("%d",num-(x*(num/x)));
    int z=num-(x*(num/x));
    for(int i=2;i<z;i++){
        if(z%i==0){
            prime=0;
        }
    }
   if(prime==1){
    printf("prime");
   }else{
        printf("not prime");
   }
    return 0;
}
