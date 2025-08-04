#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum=0;
    for(int i=10;i<100;i++){
        if(((i/10)+(i%10)==6)&&(i%2==0))
        {printf("%d\n",i);
        }
    }
}
