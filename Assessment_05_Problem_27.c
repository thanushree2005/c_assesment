#include <stdio.h>
#include <stdlib.h>

int main()
{  int s=0;
   for(int i=1;i<100000;i++){
    int sum=0;

    for(int temp=i;temp>0;temp/=10){
        sum+=temp%10;

    }
    if(sum==14){
        s++;
    }
   }
   printf("%d",s);
    return 0;
}
