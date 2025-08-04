#include <stdio.h>
#include <stdlib.h>
void memcopy(int *src,int *des,int s){
for(int i=0;i<s;i++){
    *des=*src;
    *des++;
    *src++;
}

}
int main()
{  int a[4]={1,3,6,7};
    int b[4];
    memcopy(a,b,4);
    printf("after copy\n");
    for(int i=0;i<4;i++){
    printf("%d\n",b[i]);
    }
}
