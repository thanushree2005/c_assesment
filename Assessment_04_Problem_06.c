#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    loop:if(i<20){
        if(i%2!=0)
        {printf("%d\n",i);
        }
        i++;
        goto loop;
    }
}
