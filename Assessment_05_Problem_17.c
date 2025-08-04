#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
     printf("enter a number");
     scanf("%d",&num);
     int s=0;
     for(int t=num;num>0;num=num/10)
     {
        int u=num%10;
        s+=u;
    }
    num=t;
    int p=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            p=0;
        }
    }
  if(s==14){
        if(p==1)
        printf("prime &sum of digits is 14");
        else
        printf("not prime but sum of digits is 14");

    }else{
         if(p==1)
        printf("prime &sum of digits is not 14");
        else
        printf("not prime & sum of digits is not 14");}}



