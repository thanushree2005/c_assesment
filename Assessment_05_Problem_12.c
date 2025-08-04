#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int sum=0;
   for(int temp=num;temp>0;temp=temp/10){
        sum+=temp%10;
    }
    printf("%d",sum);
    return 0;
}
