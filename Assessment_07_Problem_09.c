#include <stdio.h>

void disp_2digit_ones5();
int main() {
    disp_2digit_ones5();
    return 0;
}
void disp_2digit_ones5(){
    int s=0;
   for(int i=10;i<=99;i++){
   if((i%10)==5)
   {
    s+=i;
    }
}
    printf("%d",s);
}
