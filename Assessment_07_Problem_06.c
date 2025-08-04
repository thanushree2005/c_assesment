#include <stdio.h>
void disp_2digit_odd_below20(void);
int main() {
     disp_2digit_odd_below20();
    return 0;
}
void disp_2digit_odd_below20(){
   for(int x=10;x<=19;x++){
   if(x%2!=0){
       printf("%d\n",x);}
}
}
