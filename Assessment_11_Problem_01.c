#include <stdio.h>
#include <stdlib.h>
void incre_fun(int *y){
    *y=*y+1;

   }
int main()
{   int x;
    scanf("%d",&x);
    printf("%d\n",x);
    incre_fun(&x);
    printf("%d",x);
}
