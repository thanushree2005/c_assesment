#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int rev=0;
    loop:if(num>0){
        rev=rev*10+num%10;
        num=num/10;
        goto loop;
    }
    printf("%d",rev);
    return 0;
}
