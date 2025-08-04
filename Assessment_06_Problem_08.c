#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    int sum=0;
    while(i<100){
        if(((i/10)+(i%10)==6)&&(i%2==0))
        {printf("%d\n",i);
        }
        i++;
    }
}
