#include <stdio.h>
#include <stdlib.h>
int disp_biggest_4digit_div7_9(void);
int main()
{
    int m=disp_biggest_4digit_div7_9();
    printf("%d",m);
    return 0;
}
int disp_biggest_4digit_div7_9(){
int max=1000;
    for(int i=1000;i<10000;i++){
        if(i>max && i%7==0 && i%9==0){
            max=i;
        }
    } return max;

}
