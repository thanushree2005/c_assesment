#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a three digit number\n");
    scanf("%d",&num);
    int sum=0;
    do{
        sum=0;
        while(num>0){
        int z=num%10;
        sum+=z;
        num=num/10;
       }
       num=sum;
    }while(sum>9);
    printf("%d",sum);
    return 0;
}
