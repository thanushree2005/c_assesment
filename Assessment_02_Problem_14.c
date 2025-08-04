#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("%d",((n/100)==(n%100))?1:0);

    return 0;
}
