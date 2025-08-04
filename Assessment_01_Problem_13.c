#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a two digit number\n");
    scanf("%d",&num);
    int rev=0;
    rev=10*(num%10)+(num/10);
    printf("%d",rev);
    return 0;
}
