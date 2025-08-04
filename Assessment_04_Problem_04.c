#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum=0;
    int i=6;
    loop:if(i>0){
        sum+=i;
        i--;
        goto loop;
    }
    printf("%d",sum);
}
