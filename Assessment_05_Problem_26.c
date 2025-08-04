#include <stdio.h>
#include <stdlib.h>

int main()
{   int max=1000;
    for(int i=1000;i<10000;i++){
        if(i>max && i%7==0 && i%9==0){
            max=i;
        }
    }
    printf("%d",max);
    return 0;
}
