#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=10;i<100;i++){
        if(((i/10)+(i%10)==7)&&(i%2!=0))
        {printf("%d\n",i);
        }
    }
}
