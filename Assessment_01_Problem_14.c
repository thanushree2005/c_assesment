#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a three digit number\n");
    scanf("%d",&num);
    int rev=0;
    rev=(100*(num%10))+(10*((num/10)%10))+(num/100);
    printf("%d",rev);
    return 0;
}
