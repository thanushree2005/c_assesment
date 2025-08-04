#include <stdio.h>
#include <stdlib.h>
void incre_fun(int *y){
    for(int i=0;i<5;i++){
    *y=*y+1;
    printf("%d\n",*y);
    y++;
}}
int main()
{   int x[5];
    for(int i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    incre_fun(x);

}
