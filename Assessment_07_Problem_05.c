#include <stdio.h>
#include <stdlib.h>
void disp_odd(void);
int main()
{   disp_odd();
    return 0;
}
void disp_odd(){
    for(int i=1;i<10;i++){
       if(i%2==1)
       printf("%d\n",i);
    }

}
