#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    while(i<100){
        if(((i/10)+(i%10)==7)&&(i%2!=0))
        {printf("%d\n",i);
        }
        i++;
    }
}
