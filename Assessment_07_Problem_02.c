#include <stdio.h>
#include <stdlib.h>
void disp_descend(void);
int main()
{   disp_descend();
    return 0;
}
void disp_descend(){
    for(int i=5;i>0;i--){
        printf("%d\n",i);
    }
}
