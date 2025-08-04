#include <stdio.h>

int disp_2digit_ones5();
int main() {

    int s=disp_2digit_ones5();
     printf("%d",s);
    return 0;
}
int disp_2digit_ones5(){
    int s=0;
   for(int i=10;i<=99;i++){
   if((i%10)==5)
   {
    s+=i;
    }
} return s;

}
