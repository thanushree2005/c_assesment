#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int sum=0;
    loop:if(num>0){
        sum+=num%10;
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
