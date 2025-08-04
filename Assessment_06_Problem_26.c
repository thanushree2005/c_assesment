#include <stdio.h>
#include <stdlib.h>

int main()
{   int max=1000;
    int i=1000;
    while(i<10000){
        if(i>max && i%7==0 && i%9==0){
            max=i;
        }i++;    }
    printf("%d",max);
    return 0;
}
