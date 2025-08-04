#include <stdio.h>
void disp_2digit_odd_sum7(void);
int main() {
     disp_2digit_odd_sum7();
    return 0;
}
void disp_2digit_odd_sum7(){
   for(int x=10;x<=99;x++){
   int s=0;
   if(x%2!=0){
       int temp=x;
       while(temp>0){
           int y=temp%10;
           s+=y;
           temp/=10;
       }
       if(s==7)
       printf("%d\n",x);}
}
}
