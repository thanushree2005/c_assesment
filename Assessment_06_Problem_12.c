#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
