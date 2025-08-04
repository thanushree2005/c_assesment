#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    printf("enter a four digit number\n");
    scanf("%d",&n);
    //printf("%d  %d",(n/100),(n%100));
    if((n/100)==(n%100))
        printf("Success");
    else
        printf("Failure");
    return 0;
}
