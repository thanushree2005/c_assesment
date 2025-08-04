#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a four digit number\n");
    scanf("%d",&num);
    printf("%d",(num%100)+(1000*((num/100)%10))+(100*(num/1000)));
    return 0;
}
