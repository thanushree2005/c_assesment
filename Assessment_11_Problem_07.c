#include <stdio.h>
#include <stdlib.h>

int memcomp(int *src,int *des,int s){
    int f=1;
for(int i=0;i<s;i++){
   if(*src!=*des){f=0;}
    *des++;
    *src++;

}
if(f==0)
    return 0;
else return 1;
}
int main()
{  int a[4]={1,3,6,7};
    int b[4]={1,9,6,7};
    if(memcomp(a,b,4)==1)
    {
        printf("success");
    }
    else{
        printf("failure");
    }

}
