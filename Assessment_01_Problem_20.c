#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a three digit number\n");
    scanf("%d",&num);
    printf("%d",((num%10)+(100*(num/100))));
    return 0;
}
