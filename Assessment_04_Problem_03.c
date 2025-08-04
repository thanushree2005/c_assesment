#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum=0;
    int i=1;
    loop:if(i<6){
        sum+=i;
        i++;
        goto loop;
    }
    printf("%d",sum);
}
