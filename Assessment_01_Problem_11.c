#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a two digit number\n");
    scanf("%d",&num);
    int sum=0;
    sum=(num%10)+(num/10);
    printf("%d",sum);
    return 0;
}
