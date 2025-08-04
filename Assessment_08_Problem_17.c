#include <stdio.h>
#include <stdlib.h>
int disp_count_sum14(void);
int main()
{
    int s=disp_count_sum14();
    printf("%d",s);
    return 0;
}
int disp_count_sum14(){
   int s=0;
   for(int i=1;i<100000;i++){
    int sum=0;
    int temp=i;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    if(sum==14){
        s++;
    }
   }
   return s;
}
