#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    int sum=0;
    while(i<100){
        if((((i/10)%10)==7)&&(i%2!=0)){
            sum+=i;
        }
         i++;
        }
     printf("%d\n",sum);
}
