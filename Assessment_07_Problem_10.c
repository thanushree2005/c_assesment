#include <stdio.h>

void disp_2digit_odd_sum_tens7(void);

int main() {
     disp_2digit_odd_sum_tens7();
    return 0;
}
void disp_2digit_odd_sum_tens7(){
   int s=0;
   for(int x=10;x<=99;x++){
   if(x%2!=0){
        if((x/10)%10==7){
        s+=x;}
   }

}
 printf("%d\n",s);
}
