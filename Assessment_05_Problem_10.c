#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    for(int i=10;i<100;i++){
        if((((i/10)%10)==7)&&(i%2!=0)){
            sum+=i;
        }
        }
     printf("%d\n",sum);
}
