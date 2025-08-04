#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a two digit number\n");
    scanf("%d",&num);
    printf("%d",(((num/10)+(num%10))%2==0)?num:(num-5));
    return 0;
}
