#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int i=0;
    loop:if(num>0){
        i++;
        num=num/10;
        goto loop;
    }
    printf("%d",i);
    return 0;
}
