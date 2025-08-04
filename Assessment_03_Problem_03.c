#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n<50)
        printf("Success");
    else
        printf("Failure");
    return 0;
}
