#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    loop:if(i<10){
        if(i%2!=0)
        {printf("%d\n",i);
        }
        i++;
        goto loop;
    }
}
