#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a two digit number\n");
    scanf("%d",&num);
    printf("%d",10+(num%10));
    return 0;
}
