#include <stdio.h>
#include <stdlib.h>
void disp_assend(void);
int main()
{   disp_assend();
    return 0;
}
void disp_assend(){
    for(int i=1;i<6;i++){
        printf("%d\n",i);
    }
}
