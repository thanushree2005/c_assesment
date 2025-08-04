#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
    int i=0;
    while(num>0){
        i++;
        num=num/10;
    }
    printf("%d",i);
    return 0;
}
