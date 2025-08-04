#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int rev=0;
    for(int temp=num;temp>0;temp=temp/10){
        rev=rev*10+temp%10;
    }
    printf("%d",rev);
    return 0;
}
