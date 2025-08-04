#include <stdio.h>

int disp_2digit_odd_sum_tens7(void);

int main() {
     int s=disp_2digit_odd_sum_tens7();
     printf("%d\n",s);
    return 0;
}
int disp_2digit_odd_sum_tens7(){
   int s=0;
   for(int x=10;x<=99;x++){
   if(x%2!=0){
        if((x/10)%10==7){
        s+=x;}
   }

} return s;

}
