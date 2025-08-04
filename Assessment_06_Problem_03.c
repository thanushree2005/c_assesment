#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    int sum=0;
    while(i>0){
        sum+=i;
        i--;
    }
    printf("%d\n",sum);
}
