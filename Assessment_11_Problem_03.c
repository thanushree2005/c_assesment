#include <stdio.h>
#include <stdlib.h>
void arrange_ascend(int *n){
    for(int j=0;j<5;j++ ){
        *n=j+1;
        n++;
    }
}
int main()
{  int num[5];
   arrange_ascend(num);
    for(int i=0;i<5;i++){
        printf("%d",num[i]);
    }
}
