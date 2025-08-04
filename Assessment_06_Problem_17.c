#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
     printf("enter a number");
     scanf("%d",&num);
     int s=0;
     int t=num;
     while(num>0){
        int u=num%10;
        s+=u;
        num=num/10;
    }
    num=t;
    int i=2;
    int p=1;
    while(i<num){
        if(num%i==0){
            p=0;
        }
        i++;
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



