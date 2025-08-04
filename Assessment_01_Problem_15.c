#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a four digit number\n");
    scanf("%d",&num);
    printf("%d",(100*(num/100))+(10*(num%10))+((num/10)%10));
    return 0;
}
